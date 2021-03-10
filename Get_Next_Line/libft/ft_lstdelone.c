/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 13:46:34 by fciocan           #+#    #+#             */
/*   Updated: 2018/02/05 18:16:49 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if ((alst == NULL) || (*alst == NULL))
		return ;
	if (del != NULL)
		del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
