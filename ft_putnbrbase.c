/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:30:24 by aminasya          #+#    #+#             */
/*   Updated: 2022/04/12 19:45:23 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase(unsigned long long c, unsigned int base, int type)
{
	int	count;

	count = 0;
	if (c > base - 1)
		count += ft_putnbrbase(c / base, base, type);
	if (c % base < 10)
		count += ft_putchar(c % base + '0');
	else if (c % base >= 10 && type == 0)
		count += ft_putchar (c % base + 87);
	else if (c % base >= 10 && type == 1)
		count += ft_putchar (c % base + 55);
	return (count);
}
