/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 00:59:22 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 17:15:34 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_checkset(char a_ch, char const *ap_set)
{
	int		i;

	i = 0;
	while (ap_set[i])
	{
		if (ap_set[i] == a_ch)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *ap_str, char const *ap_set)
{
	char	*p_str;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = ft_strlen(ap_str);
	while (ap_str[start] && ft_checkset(ap_str[start], ap_set))
		start++;
	while (end > start && ft_checkset(ap_str[end - 1], ap_set))
		end--;
	if (!(p_str = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	i = 0;
	while (start < end)
	{
		p_str[i] = ap_str[start];
		i++;
		start++;
	}
	p_str[i] = 0;
	return (p_str);
}
