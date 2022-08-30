/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftumay <ftumay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:18:19 by ftumay            #+#    #+#             */
/*   Updated: 2022/08/18 19:43:53 by ftumay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "unistd.h"
# include "stdarg.h"
# include "stdlib.h"
# include "stdio.h"

int	ft_formats(va_list list, char g);
int	ft_printf(const char *str, ...);
int	array_print(char *str);
int	count_digit(unsigned int g);
int	ft_uitoa(unsigned int g);
int	hex_print(unsigned long long x, char g);
int	ptr_print(unsigned long long number);
int	nbr_print(int n);

#endif