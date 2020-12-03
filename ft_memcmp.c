/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:03:04 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 22:38:36 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ap_base1, const void *ap_base2, size_t a_num)
{
	const unsigned char	*p_base1;
	const unsigned char	*p_base2;
	unsigned int		i;

	p_base1 = ap_base1;
	p_base2 = ap_base2;
	i = 0;
	while (i < a_num)
	{
		if (p_base1[i] != p_base2[i])
			return (p_base1[i] - p_base2[i]);
		i++;
	}
	return (NULL);
}
