/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocapers <marvin@student.42.fr>              +#+  +:+      +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:33:08 by ocapers            #+#    #+#            */
/*   Updated: 2022/01/10 22:33:08 by ocapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);

char	*get_line(char *all_text);

char	*skip_before_new_line(char *all_text);

char	*ft_strjoin(char *all_text, char *tmp);

char	*ft_strchr(char *s, int c);

size_t	ft_strlen(const char *s);

#endif