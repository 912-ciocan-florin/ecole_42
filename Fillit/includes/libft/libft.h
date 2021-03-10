/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 16:03:25 by fciocan           #+#    #+#             */
/*   Updated: 2018/01/20 16:03:37 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void			ft_memdel(void **ap);
void			*ft_memset(void *b, int c, size_t len);
void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl(char const *s);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putstr_fd(char const *s, int fd);
size_t			ft_strlen(const char *str);
char			*ft_strnew(size_t size);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
void			*ft_memalloc(size_t size);

#endif
