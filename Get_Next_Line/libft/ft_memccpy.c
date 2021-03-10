/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 12:19:02 by fciocan           #+#    #+#             */
/*   Updated: 2018/02/05 18:17:04 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dest2;
	const unsigned char	*src2;

	i = 0;
	dest2 = dest;
	src2 = src;
	while (i < n)
	{
		dest2[i] = src2[i];
		if (src2[i] == (unsigned char)c)
		{
			return (&dest[i + 1]);
		}
		i++;
	}
	return (NULL);
}
