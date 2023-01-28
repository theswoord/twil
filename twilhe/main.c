/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:07:02 by nbouhali          #+#    #+#             */
/*   Updated: 2023/01/28 15:29:26 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	pressed(int pressed, t_long *longe)
{
	if (pressed == NUMUP || pressed == W || pressed == UP)
	{
		movementup(pressed, longe);
	}
	if (pressed == NUMDOWN || pressed == S || pressed == DOWN)
	{
		movementdown(pressed, longe);
	}
	if (pressed == NUMLEFT || pressed == A || pressed == LEFT)
	{
		movementleft(pressed, longe);
	}
	if (pressed == NUMRIGHT || pressed == D || pressed == RIGHT)
	{
		movementright(pressed, longe);
	}
	if (pressed == ESC)
		exit(0);
	return (1);
}

void	drawandmove(t_long *longe)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < longe->map.lines)
	{
		while (i < longe->map.tol)
		{
			actualdraw(&j, &i, longe);
			i++;
		}
		i = 0;
		j++;
	}
}

void	rssam(t_long *longe)
{
	longe->init.win = mlx_new_window(longe->init.mlx, (longe->map.tol * 32),
			(longe->map.lines * 32), "ft_crawl");
	drawandmove(longe);
	mlx_key_hook(longe->init.win, pressed, longe);
	mlx_loop(longe->init.mlx);
}

void	initialization(t_long *longe)
{
	longe->img.coin = "./coin.XPM";
	longe->img.player = "./player.XPM";
	longe->img.wall = "./wall.XPM";
	longe->img.floor = "./floor.XPM";
	longe->img.exit = "./portal.XPM";
	longe->init.mlx = mlx_init();
	longe->img.img1 = mlx_xpm_file_to_image(longe->init.mlx, longe->img.wall,
			&longe->img.img_width, &longe->img.img_height);
	longe->img.img0 = mlx_xpm_file_to_image(longe->init.mlx, longe->img.floor,
			&longe->img.img_width, &longe->img.img_height);
	longe->img.imgp = mlx_xpm_file_to_image(longe->init.mlx, longe->img.player,
			&longe->img.img_width, &longe->img.img_height);
	longe->img.imge = mlx_xpm_file_to_image(longe->init.mlx, longe->img.exit,
			&longe->img.img_width, &longe->img.img_height);
	longe->img.imgc = mlx_xpm_file_to_image(longe->init.mlx, longe->img.coin,
			&longe->img.img_width, &longe->img.img_height);
}

void	actualdraw(int *j, int *i, t_long *longe)
{
	if (longe->map.kisma[*j][*i] == '1')
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.img1, *i * 32, *j * 32);
	if (longe->map.kisma[*j][*i] == '0' || longe->map.kisma[*j][*i] == 'P'
		|| longe->map.kisma[*j][*i] == 'E' || longe->map.kisma[*j][*i] == 'C')
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.img0, *i * 32, *j * 32);
	if (longe->map.kisma[*j][*i] == 'P')
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.imgp, *i * 32, *j * 32);
	if (longe->map.kisma[*j][*i] == 'C')
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.imgc, *i * 32, *j * 32);
	if (longe->map.kisma[*j][*i] == 'E')
		mlx_put_image_to_window(longe->init.mlx, longe->init.win,
			longe->img.imge, *i * 32, *j * 32);
}
