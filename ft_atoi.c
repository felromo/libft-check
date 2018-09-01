/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 23:51:33 by fromo             #+#    #+#             */
/*   Updated: 2018/08/28 21:18:06 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_atoi(const char *str)
{
	int				sign;
	unsigned long	product;

	product = 0;
	while (ft_iswhitespace(*str))
		str++;
	sign = (*str == '-');
	str += (*str == '+' || *str == '-') ? 1 : 0;
	while (ft_isdigit(*str))
	{
		product *= 10;
		product += (unsigned int)*str++ - 48;
	}
	return (sign ? product * -1 : product);
}
