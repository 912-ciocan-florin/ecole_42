/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 19:56:58 by fciocan           #+#    #+#             */
/*   Updated: 2018/06/11 21:10:28 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		expose_hook(t_env *e)
{
	if (e->ftype == 1)
		mandelbrot(e);
	else if (e->ftype == 2)
		julia(e);
	else if (e->ftype == 3)
		newton(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img.img_ptr, 0, 0);
	mlx_string_put(e->mlx, e->win, 10, 10, 0xFFFFFF, "Move = ^ v < >");
	mlx_string_put(e->mlx, e->win, 10, 30, 0xFFFFFF, "Zoom = Mouse Scroll");
	mlx_string_put(e->mlx, e->win, 10, 50, 0xFFFFFF, "Color: T");
	mlx_string_put(e->mlx, e->win, 10, 70, 0xFFFFFF, "Exit: Esc");
	return (1);
}
