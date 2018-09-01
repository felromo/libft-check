/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 23:45:46 by fromo             #+#    #+#             */
/*   Updated: 2018/08/25 23:47:01 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*cmp;
	char	*tmp;

	if (!*needle)
		return (char *)haystack;
	if (needle == haystack)
		return ((char *)haystack);
	while (*haystack)
	{
		cmp = (char *)haystack;
		tmp = (char *)needle;
		while (*tmp && *cmp == *tmp)
		{
			cmp++;
			tmp++;
		}
		if (!*tmp)
			return (char *)haystack;
		haystack++;
	}
	return (NULL);
}
