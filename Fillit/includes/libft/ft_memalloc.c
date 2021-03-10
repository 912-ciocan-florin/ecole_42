/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 16:01:38 by fciocan           #+#    #+#             */
/*   Updated: 2018/01/20 16:07:22 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*p;
	char	*c;

	p = malloc(size);
	if (p == NULL)
		return (NULL);
	c = p;
	i = 0;
	while (i < size)
	{
		c[i] = 0;
		i++;
	}
	return (p);
}
