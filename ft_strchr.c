/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:55:35 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 14:01:44 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

char	*ft_strchr(const char *ap_str, int a_ch)
{
	int	i;

	i = 0;
	while (i < (int)ft_strlen(ap_str) + 1)
	{
		if (ap_str[i] == (char)a_ch)
			return ((char *)ap_str + i);
		i++;
	}
	return (NULL);
}
