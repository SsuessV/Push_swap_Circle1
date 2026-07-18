/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 00:31:22 by bsurilla          #+#    #+#             */
/*   Updated: 2026/06/22 19:48:12 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifndef HEX_LOWER
#  define HEX_LOWER "0123456789abcdef"
#  define HEX_UPPER "0123456789ABCDEF"
# endif

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_format(char formatter, va_list format);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int u);
int		ft_putnbr_hex(unsigned long n, char *hex);
int		ft_putptr(void *ptr);

#endif
