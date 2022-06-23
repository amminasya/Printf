/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:49:20 by aminasya          #+#    #+#             */
/*   Updated: 2022/04/12 19:09:48 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *c)
{
	int	count;

	count = 0;
	if (c == NULL)
		c = "(null)";
	while (*c)
	{
		count += ft_putchar(*c);
		c++;
	}
	return (count);
}
