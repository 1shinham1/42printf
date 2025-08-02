/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinseungheon <sinseungheon@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:31:38 by sinseungheo       #+#    #+#             */
/*   Updated: 2025/08/02 16:15:45 by sinseungheo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		returnvalue;
	va_list	args;

	va_start(args, str);
	returnvalue = 0;
	while (*str != 0)
	{
		if (*str == '%')
		{
			str++;
			caseofpersent(&str, args, &returnvalue);
			continue ;
		}
		write(1, str, 1);
		returnvalue++;
		str++;
	}
	return (returnvalue);
}
/*
int main(void)
{
	int j;

	j = 0;
	ft_printf("%d %% %p %u\n",1234,&j, 4294967295);
	ft_printf("%d %% %p %u\n",1234,&j, 4294967295);
}*/
/*
printf는 int값을 반환한다.
va_arg는 int로 꺼내야한다.
char*은 char*로 꺼내야한다. -> 큰 값을 기준으로 꺼냄
*/