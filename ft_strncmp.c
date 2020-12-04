/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:19:31 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 17:08:05 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *ap_str1, const char *ap_str2, size_t a_num)
{
	size_t	i;

	i = 0;
	while (ap_str1[i] && ap_str2[i] && i < a_num)
	{
		if (ap_str1[i] != ap_str2[i])
			return ((unsigned char)ap_str1[i] - (unsigned char)ap_str2[i]);
		i++;
	}
	return (0);
}
