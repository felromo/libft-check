/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 00:26:31 by fromo             #+#    #+#             */
/*   Updated: 2018/08/28 19:56:31 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*buf;
	int		i;

	if (!s)
		return (NULL);
	buf = (char *)ft_memalloc(sizeof(char) * (len + 1));
	i = 0;
	if (buf)
	{
		while (len-- && s[start])
		{
			buf[i] = s[start];
			i++;
			start++;
		}
		buf[i] = '\0';
	}
	return (buf);
}
