/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adahmani <adahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:07:37 by adahmani          #+#    #+#             */
/*   Updated: 2023/11/24 13:31:00 by adahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_diffparam(va_list lst, const char c);
int		ft_printchar(char c);
int		ft_printstr(char *str);
void	ft_putstr(char *str);
int		ft_printptr(unsigned long long ptr);
void	ft_putptr(unsigned long long ptr);
int		ft_ptrlen(uintptr_t num);
int		ft_printdecint(int n);
int		ft_printunsigned(unsigned int d);
char	*ft_uitoa(unsigned int n);
int		ft_num_len(unsigned	int n);
int		ft_printpercent(void);
int		ft_printhex(unsigned int n, const char c);
void	ft_puthex(unsigned int n, const char c);
int		ft_hexlen(unsigned	int n);

#endif