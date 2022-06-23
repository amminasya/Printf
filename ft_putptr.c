/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:53:28 by aminasya          #+#    #+#             */
/*   Updated: 2022/04/12 19:09:39 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long c)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count += ft_putnbrbase(c, 16, 0);
	return (count);
}
