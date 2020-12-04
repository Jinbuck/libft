/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 00:08:41 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 17:15:54 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *ap_str, unsigned int a_start, size_t a_len)
{
	char	*p_str;
	size_t	i;

	if (ap_str == 0)
		return (NULL);
	if (a_start >= ft_strlen(ap_str))
		return (ft_strdup(""));
	if (!(p_str = (char *)malloc(sizeof(char) * (a_len + 1))))
		return (NULL);
	i = 0;
	while (ap_str[i] && i < a_len)
	{
		p_str[i] = ap_str[a_start];
		i++;
		a_start++;
	}
	p_str[i] = 0;
	return (p_str);
}
