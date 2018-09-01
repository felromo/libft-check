/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 00:30:18 by fromo             #+#    #+#             */
/*   Updated: 2018/08/28 01:49:51 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	arrlen(char *str, char del)
{
	int	len;
	int	w;

	len = 0;
	w = 0;
	while (*str)
	{
		if (*str != del)
		{
			len += (w) ? 0 : 1;
			w = 1;
		}
		if (*str == del && w)
			w = 0;
		str++;
	}
	return (!len) ? len + w : len;
}

char		**ft_strsplit(char const *s, char c)
{
	char	**buf;
	size_t	len;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	len = arrlen((char *)s, c);
	if (!(buf = (char **)ft_memalloc((sizeof(char *) * len) + 1)))
		return (NULL);
	j = 0;
	while (len--)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (s[i] != c && s[i])
			i++;
		buf[j++] = ft_strsub(s, 0, i);
		while (*s != c && *s)
			s++;
	}
	buf[j] = NULL;
	return (buf);
}
