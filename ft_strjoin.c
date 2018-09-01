/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 00:27:26 by fromo             #+#    #+#             */
/*   Updated: 2018/08/28 19:05:33 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;
	int		l1;
	int		l2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = 0;
	buf = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (buf)
	{
		while (*s1)
		{
			*buf++ = *s1++;
		}
		while (*s2)
		{
			*buf++ = *s2++;
		}
		*buf = '\0';
		return (buf - (l1 + l2));
	}
	return (buf);
}
