/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 01:55:11 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 17:12:32 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *ap_dst, const char *ap_src, size_t a_dst_size)
{
	size_t	i;
	size_t	src_len;

	if (ap_dst == 0 || ap_src == 0)
		return (0);
	src_len = ft_strlen(ap_src);
	i = 0;
	while (i + 1 < a_dst_size && ap_src[i])
	{
		ap_dst[i] = ap_src[i];
		i++;
	}
	if (a_dst_size)
		ap_dst[i] = 0;
	return (src_len);
}
