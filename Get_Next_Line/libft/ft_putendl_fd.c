/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 13:50:40 by fciocan           #+#    #+#             */
/*   Updated: 2018/02/05 18:17:24 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int i;

	i = -1;
	while (s[++i])
		ft_putchar_fd(s[i], fd);
	ft_putchar_fd('\n', fd);
}
