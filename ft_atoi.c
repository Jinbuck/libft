/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:18:44 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 01:52:51 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *ap_nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	while (ap_nptr[i] == ' ' || ap_nptr[i] == '\n' || ap_nptr[i] == '\t' ||
			ap_nptr[i] == '\v' || ap_nptr[i] == '\f' || ap_nptr[i] == '\r')
		i++;
	if (ap_nptr[i] == '-')
		sign = -1;
	if (ap_nptr[i] == '+' || ap_nptr[i] == '-')
		++i;
	num = 0;
	while (ap_nptr[i] >= '0' && ap_nptr[i] <= '9')
	{
		num = num * 10 + (ap_nptr[i] - '0');
		i++;
	}
	return (num * sign);
}
