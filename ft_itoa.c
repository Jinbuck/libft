/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 12:01:33 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 17:17:45 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_abs(int a_num)
{
	long long	abs_num;

	abs_num = a_num;
	if (a_num < 0)
		return (abs_num * -1);
	return (abs_num);
}

int			ft_digitlen(int a_num)
{
	int			len;
	long long	abs_num;

	len = 1;
	abs_num = ft_abs(a_num);
	while (abs_num /= 10)
		len++;
	return (len);
}

char		*ft_itoa(int a_num)
{
	char		*p_str;
	long long	abs_num;
	int			len;
	int			i;

	abs_num = ft_abs(a_num);
	len = ft_digitlen(a_num);
	if (a_num < 0)
		len++;
	if (!(p_str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (a_num < 0)
		p_str[0] = '-';
	i = 1;
	while (i <= len)
	{
		if (p_str[len - i] != '-')
			p_str[len - i] = (abs_num % 10) + '0';
		abs_num /= 10;
		i++;
	}
	p_str[len] = 0;
	return (p_str);
}
