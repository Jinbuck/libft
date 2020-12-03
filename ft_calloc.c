/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:40:57 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 22:55:39 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t a_count, size_t a_size)
{
	char *p_ret;

	if (!(p_ret = (char *)malloc(a_count * a_size)))
		return (NULL);
	ft_memset(p_ret, 0, a_count * a_size);
	return (p_ret);
}
