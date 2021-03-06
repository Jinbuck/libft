/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:30:33 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 01:00:17 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int a_ch)
{
	if (a_ch >= 'A' && a_ch <= 'Z')
		return (a_ch + 'a' - 'A');
	return (a_ch);
}
