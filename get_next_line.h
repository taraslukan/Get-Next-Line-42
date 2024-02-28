/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:01:09 by tlukan            #+#    #+#             */
/*   Updated: 2024/02/19 15:01:13 by tlukan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H

#ifndef		BUFFER_SIZE
# define	BUFFER_SIZE 5
#endif

# include	<fcntl.h>
# include	<stdio.h>
# include	<unistd.h>
# include	<stdlib.h>

char	*get_next_line(int fd);
int	dajjedajje(char *buf, int i, int read_len, int fd);
void	ififn(char *buf, int ind_n);
char	*ft_strdup( char *s1, int len);
char	*ft_strjoin(char *s1, char *s2, int n);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);



#endif	