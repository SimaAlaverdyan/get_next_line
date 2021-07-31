/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salaverd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:51:37 by salaverd          #+#    #+#             */
/*   Updated: 2021/03/02 17:57:35 by salaverd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *str);
char	*leftover(char *tmp);
char	*the_line(char *tmp);
#endif
