/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_long_hex_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:55:53 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 16:18:44 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_long_hex_lower(unsigned long n, int *returnvalue)
{
	if (n >= 16)
		print_long_hex_lower(n / 16, returnvalue);
	write(1, &"0123456789abcdef"[n % 16], 1);
	(*returnvalue)++;
}
