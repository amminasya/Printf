/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:45:57 by aminasya          #+#    #+#             */
/*   Updated: 2022/04/12 20:02:54 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *form, ...)
{
	int		count;
	va_list	lst;

	count = 0;
	va_start(lst, form);
	while (*form != '\0')
	{
		if (*form == '%' && form++)
		{
			if (*form == 'c' || *form == 's' || *form == 'd'
				|| *form == 'x' || *form == 'X' || *form == 'u'
				|| *form == 'i' || *form == 'p' || *form == '%')
				count += ft_form_check(form, &lst);
		}
		else
			count += ft_putchar(*form);
		form++;
	}
	va_end(lst);
	return (count);
}
