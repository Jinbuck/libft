/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:28:14 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 15:30:37 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ap_base, size_t a_num)
{
	unsigned char	*p_pos;
	size_t			i;

	p_pos = (unsigned char *)ap_base;
	i = 0;
	while (i < a_num)
	{
		p_pos[i] = 0;
		i++;
	}
}
