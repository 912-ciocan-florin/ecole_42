/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 13:53:42 by fciocan           #+#    #+#             */
/*   Updated: 2018/02/05 18:18:08 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s)
{
	char *d;

	d = malloc(ft_strlen(s) + 1);
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, s);
	return (d);
}
