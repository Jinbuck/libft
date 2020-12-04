/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:20:34 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 16:54:01 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ap_base, int a_value, size_t a_num)
{
	unsigned char	*p_pos;
	size_t			i;

	p_pos = ap_base;
	i = 0;
	while (i < a_num)
	{
		p_pos[i] = (unsigned char)a_value;
		i++;
	}
	return (ap_base);
}
