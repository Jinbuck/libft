/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:18:44 by mjin              #+#    #+#             */
/*   Updated: 2020/12/05 02:09:03 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *ap_nptr)
{
	long long	num;
	int			sign;
	int			i;

	i = 0;
	while (ap_nptr[i] == ' ' || ap_nptr[i] == '\n' || ap_nptr[i] == '\t' ||
			ap_nptr[i] == '\v' || ap_nptr[i] == '\f' || ap_nptr[i] == '\r')
		i++;
	sign = 1;
	if (ap_nptr[i] == '-')
		sign = -1;
	if (ap_nptr[i] == '+' || ap_nptr[i] == '-')
		++i;
	num = 0;
	while (ap_nptr[i] >= '0' && ap_nptr[i] <= '9')
	{
		if (num * sign > 2147483647)
			return (-1);
		else if (num * sign < -2147483648)
			return (0);
		else
			num = num * 10 + (ap_nptr[i] - '0');
		i++;
	}
	return (num * sign);
}
