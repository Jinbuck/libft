/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:24:23 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 17:03:09 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_makeword(char *ap_word, int a_len, char const *ap_str, int a_pos)
{
	int	i;

	i = 0;
	while (a_len > 0)
	{
		ap_word[i] = ap_str[a_pos - a_len];
		i++;
		a_len--;
	}
	ap_word[i] = 0;
	return (ap_word);
}

char	**ft_makelist(char **ap_list, char const *ap_str, char a_ch, int a_cnt)
{
	int	len;
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (ap_str[k] && i < a_cnt)
	{
		len = 0;
		while (ap_str[k] && ap_str[k] == a_ch)
			k++;
		while (ap_str[k] && ap_str[k] != a_ch)
		{
			k++;
			len++;
		}
		if (!(ap_list[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		ft_makeword(ap_list[i], len, ap_str, k);
		i++;
	}
	ap_list[i] = 0;
	return (ap_list);
}

int		ft_wordcount(char const *ap_str, char a_ch)
{
	int	count;
	int	i;
	
	count = 0;
	i = 0;
	while (ap_str[i])
	{
		if (ap_str[i] == a_ch)
			i++;
		else
		{
			count++;
			while (ap_str[i] && ap_str[i] != a_ch)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *ap_str, char a_ch)
{
	int		count;
	char	**p_word_list;

	count = ft_wordcount(ap_str, a_ch);
	if (!(p_word_list = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	ft_makelist(p_word_list, ap_str, a_ch, count);
	return (p_word_list);
}
