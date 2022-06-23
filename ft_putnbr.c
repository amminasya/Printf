/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:56:06 by aminasya          #+#    #+#             */
/*   Updated: 2022/04/12 19:32:43 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int c)
{
	int				count;
	unsigned int	num;

	count = 0;
	if (c < 0)
	{
		count += ft_putchar('-');
		num = c * (-1);
	}
	else
		num = c;
	if (num > 9)
		count += ft_putnbr(num / 10);
	count += ft_putchar(num % 10 + '0');
	return (count);
}
