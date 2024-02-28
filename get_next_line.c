/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:16:36 by tlukan            #+#    #+#             */
/*   Updated: 2024/02/19 17:16:39 by tlukan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	dajjedajje(char *buf, int i, int read_len, int fd);
void	ififn(char *buf, int ind_n);

char	*get_next_line(int fd)
{
	static char		*buf;
	char			*ret;
	int				read_len;
	int				i;

	read_len = 1;
	while (read_len > 0)
	{
		read_len = dajjedajje(buf, -1, read_len, fd);
		if (read_len == -1)
			return (NULL);
		i = dajjedajje(buf, 0, read_len, fd);
		if(buf[i] == '\n')
		{
			ret = ft_strjoin(ret, buf, i);
			ififn(buf, i);
			return(ret);
		}
		else
		{
			ret = ft_strjoin(ret, buf, i);
			//free(buf);
		}
	}
	return(ret);
}

int	dajjedajje(char *buf, int i, int read_len, int fd)
{
	if (!*buf && i == -1)
	{
		read_len = read(fd, buf, BUFFER_SIZE);
		return (read_len);
	}
	else
	{
		i = 0;
		while (buf[i] && buf[i] != '\n')
			i++;
	}
	return (i);
}

void	ififn(char *buf, int ind_n)
{
	int	fri;

	fri = 0;
	ind_n++;
	while (buf[ind_n])
	{
		buf[fri] = buf[ind_n];
		ind_n++;
		fri++;
	}
	while (buf[fri])
	{
		buf[fri] = 0;
		fri++;
	}
	return;
}

char	*ft_strdup( char *s1, int len)
{
	char	*ris;
	int	i;

	ris = ft_calloc((len + 1), sizeof(char));
	if (ris == NULL)
		return (NULL);
		i = 0;
	while (s1[i] && i < len)
	{
		ris[i] = s1[i];
		i++;
	}
	ris[i] = '\0';

	return (ris);
}

char	*ft_strjoin(char *s1, char *s2, int n)
{
	char	*ris;
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!s1)
		return (ft_strdup(s2, n));
	ris = ft_calloc((ft_strlen(s1) + n + 1), sizeof(char));
	if (ris == NULL)
		return (NULL);
	while (i < (int)ft_strlen(s1))
	{
		ris[i] = s1[i];
		i++;
	}
	while (j < (int)ft_strlen(s1) && j < n)
	{
		ris[i + j] = s2[j];
		j++;
	}
	ris[i + j] = '\0';
	return (ris);
}

/*
void	rdwrsave(char *save, size_t fri, size_t ind_n)
{
	char	*ret;
	size_t	len;

	ret = NULL;
	if(save != NULL)
	{
		while (save[ind_n] && save[ind_n] != '\n')
			ind_n++;
		if(ret == NULL)
			len = 0;
		else
			len = ft_strlen(ret);	
		ret = ft_strjoin(ret, save, len + ind_n);
		if (save[ind_n] == '\n')
		{
			ind_n++;
			while (save[ind_n])
			{
				save[fri] = save[ind_n];
				ind_n++;
				fri++;
			}
			while (save[fri])
				{
					save[fri] = 0;
					fri++;
				}
			return;
		}
	}
	return;
}
















char	*get_next_line(int fd)
{
	static char		*buf;
	char		*ret;
	size_t		i;
	int			read_len;
	
	read_len = 1;
	//rdwrsave(save, 0, 0);
	while (read_len > 0)
	{
		read_len = read(fd, buf,BUFFER_SIZE);
		if (read_len == -1)
			return (NULL);
		i = 0;
		while (buf[i] && buf[i] != '\n')
		{
			i++;
			if (buf[i] == '\n')
			{
				ret = ft_strdup(buf, i);
				i++;
				save = ft_strdup(buf + i, BUFFER_SIZE - i);
				return (ret);
			}
		}
		ret = ft_strjoin(ret, buf, (ft_strlen(ret) + i));
	}
	return (ret);
}


















*/