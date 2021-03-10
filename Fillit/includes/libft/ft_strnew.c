/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 16:03:11 by fciocan           #+#    #+#             */
/*   Updated: 2018/01/20 16:03:13 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	s = (char*)malloc(sizeof(*s) * (size + 1));
	if (!s)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}
