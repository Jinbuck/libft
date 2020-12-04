/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:12:04 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 14:19:19 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int a_num, int a_fd)
{
	long long	exp_num;

	if (n < 0)
	{
		exp_num = (-1) * (long long)a_num;
		ft_putchar_fd('-', a_fd);
	}
	else
		exp_num = a_num;
	if (exp_num >= 10)
		ft_putnbr_fd(exp_num / 10, a_fd);
	ft_putchar_fd((exp_num % 10) + '0', a_fd);
}
