/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:38:21 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 16:09:24 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
char	*ft_itoa(int n);
char	*ft_unsighed_itoa(unsigned int n);
void	caseofpersent(const char **str, va_list args, int *returnvalue);
void	func_about_c(va_list args, int *returnvalue);
void	func_about_s(va_list args, int *returnvalue);
void	print_hex_upper(unsigned int n, int *returnvalue);
void	print_hex_lower(unsigned int n, int *returnvalue);
void	print_long_hex_lower(unsigned long n, int *returnvalue);
void	func_about_d(va_list args, int *returnvalue);
void	func_about_u(va_list args, int *returnvalue);
void	func_about_p(va_list args, int *returnvalue);


#endif                //위의 #ifndef 조건의 끝을 표시
/*
#ifndef LIBFT_H       
//If Not Defined LIBFT_H “LIBFT_H라는 매크로가 정의되어 있지 않다면”이라는 조건.
#define LIBFT_H
//“LIBFT_H를 정의한다”는 의미.
*/