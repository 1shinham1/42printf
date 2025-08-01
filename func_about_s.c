/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_about_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:23:45 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/01 23:24:06 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func_about_s(va_list args)
{
	char	*s;

	s = va_arg(args, char*);
	write(1, s, ft_strlen(s));
}