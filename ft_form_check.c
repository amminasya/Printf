/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_form_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:46:19 by aminasya          #+#    #+#             */
/*   Updated: 2022/04/12 19:56:06 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_form_check(const char *form, va_list *lst)
{
	int	count;

	count = 0;
	if (*form == 'c')
		count += ft_putchar(va_arg(*lst, int));
	else if (*form == 's')
		count += ft_putstr(va_arg(*lst, char *));
	else if (*form == 'd' || *form == 'i')
		count += ft_putnbr(va_arg(*lst, int));
	else if (*form == 'x')
		count += ft_putnbrbase(va_arg(*lst, unsigned int), 16, 0);
	else if (*form == 'X')
		count += ft_putnbrbase(va_arg(*lst, unsigned int), 16, 1);
	else if (*form == 'u')
		count += ft_putnbrbase(va_arg(*lst, unsigned int), 10, 0);
	else if (*form == 'p')
		count += ft_putptr(va_arg(*lst, unsigned long long));
	else if (*form == '%')
		count += ft_putchar('%');
	return (count);
}
