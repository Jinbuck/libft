/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:02:55 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 17:59:50 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *ap_str, const char *ap_sub, size_t a_num)
{
	size_t	i;
	size_t	j;
	size_t	sub_len;

	sub_len = ft_strlen(ap_sub);
	if (sub_len == 0)
		return ((char *)ap_str);
	i = 0;
	while (ap_str[i] && i + sub_len <= a_num)
	{
		if (ap_str[i] == ap_sub[0])
		{
			j = 0;
			while (ap_str[i + j] && ap_sub[j])
			{
				if (ap_str[i + j] != ap_sub[j])
					break ;
				else if (j == sub_len - 1)
					return ((char *)ap_str + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
