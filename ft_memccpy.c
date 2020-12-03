/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:08:50 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 16:21:04 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *ap_dst, const void *ap_src, int a_ch, size_t a_num)
{
	unsigned char	*p_dst_pos;
	unsigned char	*p_src_pos;
	size_t			i;

	p_dst_pos = ap_dst;
	p_src_pos = (unsigned char *)ap_src;
	i = 0;
	while (i < a_num)
	{
		p_dst_pos[i] = p_src_pos[i];
		if (p_src_pos[i] == (unsigned char)a_ch)
			return (p_dst_pos + i + 1);
		i++;
	}
	return (NULL);
}
