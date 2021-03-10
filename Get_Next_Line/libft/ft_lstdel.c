/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 13:45:54 by fciocan           #+#    #+#             */
/*   Updated: 2018/02/05 18:16:47 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*a;
	t_list		*b;

	if (alst == NULL)
		return ;
	b = *alst;
	while (b != NULL)
	{
		a = b->next;
		ft_lstdelone(&b, del);
		b = a;
	}
	*alst = NULL;
}
