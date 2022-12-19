/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yecnam <yecnam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:51:46 by yecnam            #+#    #+#             */
/*   Updated: 2022/11/27 22:24:39 by yecnam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	print_d(int a, int *count);
void	print_c(char c, int *count);
void	print_s(char *s, int *count);
void	print_u(unsigned int n, int *count);
void	print_p(unsigned long v, int *count);
void	ft_strcpy(char *dst, const char *src);
void	print_x(unsigned int n, int *count);
void	print_xx(unsigned int n, int *count);
void	print(va_list ap, char *s, int *count);
int		check_printf(char *s);
int		ft_printf(const char *s, ...);

#endif