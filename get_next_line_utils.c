/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocapers <marvin@student.42.fr>              +#+  +:+      +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:33:08 by ocapers            #+#    #+#            */
/*   Updated: 2022/01/10 22:33:08 by ocapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *all_text, char *tmp)
{
	size_t	i;
	size_t	j;
	char	*dst;

	if (!all_text)
	{
		all_text = (char *)malloc(1 * sizeof(char));
		all_text[0] = '\0';
	}
	if (!all_text || !tmp)
		return (NULL);
	dst = malloc(sizeof(char) * ((ft_strlen(all_text) + ft_strlen(tmp)) + 1));
	if (dst == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (all_text)
		while (all_text[++i] != '\0')
			dst[i] = all_text[i];
	while (tmp[j] != '\0')
		dst[i++] = tmp[j++];
	dst[ft_strlen(all_text) + ft_strlen(tmp)] = '\0';
	free(all_text);
	all_text = NULL;
	return (dst);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
