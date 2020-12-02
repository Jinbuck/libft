/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:12:26 by mjin              #+#    #+#             */
/*   Updated: 2020/12/03 02:03:05 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>

size_t		ft_strlen(const char *ap_str);
size_t		ft_strlcpy(char *ap_dst, const char *ap_src, size_t a_dst_size);
size_t		ft_strlcat(char *ap_dst, const char *ap_src, size_t a_dst_size);
char		*ft_strchr(const char *ap_s, int a_ch);
char		*ft_strrchr(const char *ap_s, int a_ch);
char		*ft_strnstr(const char *ap_big, const char *ap_lit, size_t a_num);
int			ft_strncmp(const char *ap_s1, const char *ap_s2, size_t a_num);

int			ft_atoi(const char *ap_nptr);
int			ft_isalpha(int a_ch);
int			ft_isdigit(int a_ch);
int			ft_isalnum(int a_ch);
int			ft_isascii(int a_ch);
int			ft_isprint(int a_ch);
int			ft_toupper(int a_ch);
int			ft_tolower(int a_ch);

#endif
