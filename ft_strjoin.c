/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 00:44:28 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 17:08:30 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *ap_str1, char const *ap_str2)
{
	char	*p_str;
	int		str1_len;
	int		str2_len;
	int		i;
	int		j;

	str1_len = ft_strlen(ap_str1);
	str2_len = ft_strlen(ap_str2);
	if (!(p_str = (char *)malloc(sizeof(char) * (str1_len + str2_len + 1))))
		return (NULL);
	i = 0;
	while (ap_str1[i])
	{
		p_str[i] = ap_str1[i];
		i++;
	}
	j = 0;
	while (ap_str2[j])
	{
		p_str[i] = ap_str2[j];
		i++;
		j++;
	}
	p_str[i] = 0;
	return (p_str);
}
