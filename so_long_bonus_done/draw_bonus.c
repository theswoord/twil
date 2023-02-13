/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:07:02 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/13 01:45:15 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	pressed(int pressed, t_long *longe)
{
	if (pressed == NUMUP || pressed == W || pressed == UP)
	{
		movementup(longe);
	}
	if (pressed == NUMDOWN || pressed == S || pressed == DOWN)
	{
		movementdown(longe);
	}
	if (pressed == NUMLEFT || pressed == A || pressed == LEFT)
	{
		movementleft(longe);
	}
	if (pressed == NUMRIGHT || pressed == D || pressed == RIGHT)
	{
		movementright(longe);
	}
	if (pressed == ESC)
		xpressed(longe);
	return (1);
}

void	drawandmove(t_long *longe)
{
	while (longe->map.j < longe->map.lines)
	{
		while (longe->map.i < longe->map.tol)
		{
			actualdraw(longe);
			longe->map.i++;
		}
		longe->map.i = 0;
		longe->map.j++;
	}
	mlx_loop_hook(longe->init.mlx, theclock, longe);
}

void	rssam(t_long *longe)
{
	char	*cte;

	cte = "Moves";
	longe->init.win = mlx_new_window(longe->init.mlx, ((longe->map.tol) * 32),
			((longe->map.lines) * 32), "ft_crawl");
	drawandmove(longe);
	mlx_string_put(longe->init.mlx, longe->init.win, ((longe->map.tol * 32) / 2)
		- 64, 0, 16766720, cte);
	mlx_hook(longe->init.win, 17, 0, xpressed, longe);
	mlx_key_hook(longe->init.win, pressed, longe);
	mlx_loop(longe->init.mlx);
}

void	initialization(t_long *longe)
{
	longe->img.coin = "./textures/coin.XPM";
	longe->img.player = "./textures/player.XPM";
	longe->img.wall = "./textures/wall.XPM";
	longe->img.floor = "./textures/sandstone.XPM";
	longe->init.mlx = mlx_init();
	initserp(longe);
	inittiamat(longe);
	initklown(longe);
	animation_makhleb(longe);
	longe->img.img1 = mlx_xpm_file_to_image(longe->init.mlx, longe->img.wall,
			&longe->img.img_width, &longe->img.img_height);
	longe->img.img0 = mlx_xpm_file_to_image(longe->init.mlx, longe->img.floor,
			&longe->img.img_width, &longe->img.img_height);
	longe->img.imgp = mlx_xpm_file_to_image(longe->init.mlx, longe->img.player,
			&longe->img.img_width, &longe->img.img_height);
	longe->img.imgc = mlx_xpm_file_to_image(longe->init.mlx, longe->img.coin,
			&longe->img.img_width, &longe->img.img_height);
}

void	actualdraw(t_long *longe)
{
	if (longe->map.kisma[longe->map.j][longe->map.i] == '1')
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.img1, longe->map.i * 32, longe->map.j * 32);
	if (longe->map.kisma[longe->map.j][longe->map.i] == '0'
		|| longe->map.kisma[longe->map.j][longe->map.i] == 'P'
		|| longe->map.kisma[longe->map.j][longe->map.i] == 'C'
		|| longe->map.kisma[longe->map.j][longe->map.i] == 'E')
	{
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.img0, longe->map.i * 32, longe->map.j * 32);
	}
	if (longe->map.kisma[longe->map.j][longe->map.i] == 'P')
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.imgp, longe->map.i * 32, longe->map.j * 32);
	if (longe->map.kisma[longe->map.j][longe->map.i] == 'C')
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.imgc, longe->map.i * 32, longe->map.j * 32);
}
