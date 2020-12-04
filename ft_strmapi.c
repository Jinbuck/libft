/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:59:51 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 17:12:52 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *ap_str, char (*ap_f)(unsigned int, char))
{
	char	*p_str;
	int		len;
	int		i;

	len = ft_strlen(ap_str);
	if (!ap_str)
		return (NULL);
	if (!(p_str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		p_str[i] = ap_f(i, ap_str[i]);
		i++;
	}
	p_str[i] = 0;
	return (p_str);
}
