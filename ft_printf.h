/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminasya <aminasya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:02:03 by aminasya          #+#    #+#             */
/*   Updated: 2022/04/12 20:03:58 by aminasya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *form, ...);
int	ft_form_check(const char *form, va_list *lst);
int	ft_putchar(int c);
int	ft_putstr(char *c);
int	ft_putnbr(int c);
int	ft_putnbrbase(unsigned long long c, unsigned int base, int type);
int	ft_putptr(unsigned long long c);

#endif
