/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:25:52 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 15:53:01 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex_upper(unsigned int n, int *returnvalue)
{
	if (n >= 16)
		print_hex_upper(n / 16, returnvalue);
	write(1, &"0123456789ABCDEF"[n % 16], 1);
	(*returnvalue)++;
}