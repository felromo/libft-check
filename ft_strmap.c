/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 00:20:54 by fromo             #+#    #+#             */
/*   Updated: 2018/08/27 19:02:00 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		outside_index;
	int		len;
	char	*buf;

	if (!s)
		return (NULL);
	outside_index = 0;
	len = ft_strlen(s);
	buf = (char *)malloc(sizeof(char) * (len + 1));
	if (buf)
	{
		while (s[outside_index])
		{
			buf[outside_index] = (*f)(s[outside_index]);
			outside_index++;
		}
		buf[outside_index] = '\0';
	}
	return (buf);
}
