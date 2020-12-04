/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjin <mjin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:12:26 by mjin              #+#    #+#             */
/*   Updated: 2020/12/04 14:46:40 by mjin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
void				*ft_memset(void *ap_base, int a_value, size_t a_num);
void				ft_bzero(void *ap_base, size_t a_num);
void				*ft_memcpy(void *ap_dst, const void *ap_src, size_t a_num);
void				*ft_memccpy(void *ap_dst, const void *ap_src, int a_ch,
					size_t a_num);
void				*ft_memmove(void *ap_dst, const void *ap_src, size_t a_num);
void				*ft_memchr(const void *ap_str, int a_ch, size_t a_num);
int					ft_memcmp(const void *ap_base1, const void *ap_base2,
					size_t a_num);
size_t				ft_strlen(const char *ap_str);
size_t				ft_strlcpy(char *ap_dst, const char *ap_src,
					size_t a_dst_size);
size_t				ft_strlcat(char *ap_dst, const char *ap_src,
					size_t a_dst_size);
char				*ft_strchr(const char *ap_str, int a_ch);
char				*ft_strrchr(const char *ap_str, int a_ch);
char				*ft_strnstr(const char *ap_str, const char *ap_sub,
					size_t a_num);
int					ft_strncmp(const char *ap_str1, const char *ap_str2,
					size_t a_num);
int					ft_atoi(const char *ap_nptr);
int					ft_isalpha(int a_ch);
int					ft_isdigit(int a_ch);
int					ft_isalnum(int a_ch);
int					ft_isascii(int a_ch);
int					ft_isprint(int a_ch);
int					ft_toupper(int a_ch);
int					ft_tolower(int a_ch);
void				*ft_calloc(size_t a_count, size_t a_size);
char				*ft_strdup(const char *ap_str);
char				*ft_substr(char const *ap_str, unsigned int a_start,
					size_t a_len);
char				*ft_strjoin(char const *ap_str1, char const *ap_str2);
char				*ft_strtrim(char const *ap_str1, char const *ap_set);
char				**ft_split(char const *ap_str, char a_ch);
char				*ft_itoa(int a_num);
char				*ft_strmapi(char const *ap_str,
					char (*ap_f)(unsigned int, char));
void				ft_putchar_fd(char a_ch, int a_fd);
void				ft_putstr_fd(char *ap_str, int a_fd);
void				ft_putendl_fd(char *ap_str, int a_fd);
void				ft_putnbr_fd(int a_num, int a_fd);
t_list				*ft_lstnew(void *ap_content);
void				ft_lstadd_front(t_list **ap_lst, t_list *ap_new);
int					ft_lstsize(t_list *ap_lst);
t_list				*ft_lstlast(t_list *ap_lst);
void				ft_lstadd_back(t_list **ap_lst, t_list *ap_new);
void				ft_lstdelone(t_list *ap_lst, void (*ap_del)(void *));
void				ft_lstclear(t_list **ap_lst, void (ap_del)(void *));
void				ft_lstiter(t_list *ap_lst, void (*ap_f)(void *));
t_list				*ft_lstmap(t_list *ap_lst, void *(*ap_f)(void *),
					void (*ap_del)(void *));

#endif
