/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:26:41 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/01 23:27:12 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex_lower(unsigned long int n)
{
	if (n >= 16)
		print_hex_lower(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}