/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagoliv <tiagoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 23:12:38 by tiagoliv          #+#    #+#             */
/*   Updated: 2023/05/25 13:47:33 by tiagoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
int		execute_flag(int f, va_list args);
int		ft_printnbr(int n);
void	ft_putnbr(int n);
int		ft_putunsigned_nbr(unsigned int n);
void	ft_puthexa(unsigned int n, const char x);
int		ft_printhexa(unsigned int n, const char x);
int		ft_putchar(int c);
int		ft_putstr(char *str);
void	ft_putptr(unsigned long long ptr);
int		ft_printptr(unsigned long long ptr);
int		ft_printulong(unsigned long num);
int		num_len(int n);

#endif
