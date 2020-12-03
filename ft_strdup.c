/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:57:22 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 23:05:42 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *ap_str)
{
	char			*p_str;
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(ap_str);
	if (!(p_str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (ap_str[i])
	{
		p_str[i] = ap_str[i];
		i++;
	}
	p_str[i] = 0;
	return (p_str);
}
