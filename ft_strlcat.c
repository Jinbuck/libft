/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:30:29 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 17:09:49 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *ap_dst, const char *ap_src, size_t a_dst_size)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	if (a_dst_size < ft_strlen(ap_dst))
		ret = a_dst_size + ft_strlen(ap_src);
	else
		ret = ft_strlen(ap_dst) + ft_strlen(ap_src);
	i = 0;
	while (ap_dst[i])
		i++;
	j = 0;
	while (i + 1 < a_dst_size && ap_src[j])
	{
		ap_dst[i] = ap_src[j];
		i++;
		j++;
	}
	ap_dst[i] = 0;
	return (ret);
}
