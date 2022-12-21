/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrik <henrik@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 00:44:57 by henrik            #+#    #+#             */
/*   Updated: 2022/12/20 06:48:28 by henrik           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_format(va_list args, char c);
int	ft_print_address(void *address);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr_hexa(char *base, unsigned int nbr);
int	ft_putnbr(int nbr);
int	ft_putnbr_unsigned(unsigned int nbr);

#endif
