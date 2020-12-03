/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:56:08 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 14:02:31 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *ap_str, int a_ch)
{
	int	i;

	i = (int)ft_strlen(ap_str) + 1;
	while (i--)
	{
		if (ap_str[i] == (char)a_ch)
			return ((char *)ap_str + i);
	}
	return (NULL);
}
