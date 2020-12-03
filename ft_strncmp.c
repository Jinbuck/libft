/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:19:31 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 22:37:40 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *ap_str1, const char *ap_str2, size_t a_num)
{
	size_t	i;

	while (i < len && ap_str[i] && ap_str[i])
	{
		if (ap_str1[i] != ap_str2[i])
			return ((unsigned char)ap_str1[i] - (unsigned char)ap_str2[i]);
		i++;
	}
	return (0);
}
