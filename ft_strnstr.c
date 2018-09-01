/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 23:47:48 by fromo             #+#    #+#             */
/*   Updated: 2018/08/28 18:51:18 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	if (!*haystack)
		return (NULL);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == *needle)
		{
			if ((ft_strlen((char *)needle) + i) > len)
				return (NULL);
			if (ft_strnequ((char *)&haystack[i], needle, ft_strlen(needle)))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
