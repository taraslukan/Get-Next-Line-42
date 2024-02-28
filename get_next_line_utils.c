/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:52:37 by tlukan            #+#    #+#             */
/*   Updated: 2024/02/21 15:52:50 by tlukan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



void	*ft_calloc(size_t count, size_t size)
{
	void	*ris;

	if (count && size && (4294967295U / size <= count))
		return (0);
	ris = malloc(count * size);
	if (ris == NULL)
		return (NULL);
	ft_bzero(ris, count * size);
	return (ris);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*c_b;

	i = 0;
	c_b = (char *)b;
	while (i < len)
	{
		c_b[i] = c;
		i++;
	}
	return (b);
}



/// da fare questa funzione con strdup     ft_strlcat(ret, save, (ft_strlen(ret) + ind_n));

/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;
	size_t	len_src;

	if (dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = len_dst;
	j = 0;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (i < dstsize - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}*/

//questo codice l'ho preso dal secondo file
/*
char	*ft_strjoin(char *s1, char *s2, size_t n)
{
	char	*ris;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!s2)
		return (ft_strdup(s1));
	ris = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ris == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		ris[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2) && j < n)
	{
		ris[i + j] = s2[j];
		j++;
	}
	ris[i + j] = '\0';
	return (ris);
}



size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
char	*ft_strdup(const char *s1)
{
	char	*ris;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
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
*/