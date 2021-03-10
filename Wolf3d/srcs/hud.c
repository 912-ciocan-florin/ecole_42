/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hud.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fciocan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 14:04:23 by fciocan           #+#    #+#             */
/*   Updated: 2018/06/12 17:46:43 by fciocan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

void	help_text(t_wolf3d *t)
{
	mlx_string_put(t->mlx, t->win, 10, 10, 0xEEEEEE, "Hide Help: H");
	mlx_string_put(t->mlx, t->win, 10, 30, 0xEEEEEE,
			"Move: W A S D or < ^ v >");
	mlx_string_put(t->mlx, t->win, 10, 50, 0xEEEEEE, "Sprint: Shift");
	mlx_string_put(t->mlx, t->win, 10, 70, 0xEEEEEE, "Reset Lvl: Del");
	mlx_string_put(t->mlx, t->win, 10, 90, 0xEEEEEE, "Show/Hide Texture: T");
	mlx_string_put(t->mlx, t->win, 10, 110, 0xEEEEEE, "Quit: Esc");
}
