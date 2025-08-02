/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_about_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 23:23:45 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 16:14:01 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func_about_s(va_list args, int *returnvalue)
{
	char	*s;
	size_t	len;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		write(1, "(null)", 6);
		(*returnvalue) += 6;
		return ;
	}
	len = ft_strlen(s);
	write(1, s, len);
	(*returnvalue) += len;
}
