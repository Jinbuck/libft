/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 21:50:36 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 22:01:03 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memchr(const void *ap_str, int a_ch, size_t a_num)
{
	unsigned char	*p_str_pos;
	size_t			i;

	p_str_pos = (unsigned char *)ap_str;
	i = 0;
	while (i < a_num)
	{
		if (p_str_pos[i] == (unsigned char)a_ch)
			return (p_str_pos + i);
		i++;
	}
	return (NULL);
}
