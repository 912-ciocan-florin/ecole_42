/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scales.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 19:58:20 by fciocan           #+#    #+#             */
/*   Updated: 2018/06/11 21:11:02 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

double		scaledy(t_env *e, int y)
{
	double dy;

	dy = (((e->ytop - e->ybot) * y) / e->img.height) + e->ybot;
	return (dy);
}

double		scaledx(t_env *e, int x)
{
	double dx;

	dx = (((e->xtop - e->xbot) * x) / e->img.height) + e->xbot;
	return (dx);
}
