/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 02:25:43 by fromo             #+#    #+#             */
/*   Updated: 2018/08/28 21:17:39 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	*toa(int n)
{
	char	*buf;
	int		i;
	size_t	len;

	i = 0;
	len = ft_num_len(n);
	if ((buf = ft_strnew(len)))
	{
		if (n < 0)
		{
			*buf = '-';
			n *= -1;
		}
		while (len--)
		{
			if (buf[len])
				break ;
			buf[len] = (char)(n % 10 + '0');
			n = n / 10;
		}
	}
	return (buf);
}

char		*ft_itoa(int n)
{
	char	*buf;

	if (!n && (buf = ft_strcpy(ft_strnew(1), "0")))
		;
	else if (n == -2147483648
			&& (buf = ft_strcpy(ft_strnew(11), "-2147483648")))
		;
	else
	{
		if ((buf = toa(n)))
			;
	}
	return (buf);
}
