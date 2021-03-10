/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 12:54:52 by fciocan           #+#    #+#             */
/*   Updated: 2018/02/05 18:18:36 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen((char *)s);
	while ((len != -1) && (s[len] != (char)c))
		len--;
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (0);
}
