/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:40:07 by fromo             #+#    #+#             */
/*   Updated: 2018/08/25 22:40:08 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	delimeter;

	delimeter = c;
	while (n-- > 0)
	{
		*(unsigned char *)dst++ = *(unsigned char *)src;
		if (*((unsigned char *)src) == delimeter)
			return (dst);
		src++;
	}
	return (NULL);
}
