/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 19:57:48 by fciocan           #+#    #+#             */
/*   Updated: 2018/06/11 21:10:43 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		key_press(int keycode, t_env *e)
{
	double	tmp;

	if (keycode == ESC)
	{
		mlx_destroy_window(e->mlx, e->win);
		exit(EXIT_SUCCESS);
	}
	if (keycode == T)
		e->theme += (e->theme == 5 ? -5 : 1);
	else if (keycode == UP || keycode == DOWN)
	{
		tmp = (e->ytop - e->ybot) / 4;
		e->ybot += (keycode == DOWN ? tmp : -tmp);
		e->ytop += (keycode == DOWN ? tmp : -tmp);
	}
	else if (keycode == LEFT || keycode == RIGHT)
	{
		tmp = (e->xtop - e->xbot) / 4;
		e->xbot += (keycode == RIGHT ? tmp : -tmp);
		e->xtop += (keycode == RIGHT ? tmp : -tmp);
	}
	expose_hook(e);
	return (1);
}

int		mouse(int button, int x, int y, t_env *e)
{
	double		x1;
	double		y1;

	x1 = scaledx(e, x);
	y1 = scaledy(e, y);
	if (button == 1 || button == 4)
	{
		e->xbot = x1 + ((e->xbot - x1) / 2);
		e->xtop = e->xtop + ((x1 - e->xtop) / 2);
		e->ybot = y1 + ((e->ybot - y1) / 2);
		e->ytop = e->ytop + ((y1 - e->ytop) / 2);
	}
	else if (button == 2 || button == 5)
	{
		e->xbot = e->xbot - ((e->xtop - e->xbot) / 2);
		e->xtop = e->xtop + ((e->xtop - e->xbot) / 2);
		e->ybot = e->ybot - ((e->ytop - e->ybot) / 2);
		e->ytop = e->ytop + ((e->ytop - e->ybot) / 2);
	}
	expose_hook(e);
	return (1);
}
