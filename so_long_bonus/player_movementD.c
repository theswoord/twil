/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movementD.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:33:30 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/06 22:41:14 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	movement9(int pressed, t_long *lon)
{
	if (lon->map.kisma[lon->game.posy - 1][lon->game.posx + 1] == 'C')
	{
		lon->map.kisma[lon->game.posy - 1][lon->game.posx + 1] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy - 1][lon->game.posx + 1] != '1')
	{
		if (lon->map.kisma[lon->game.posy - 1][lon->game.posx + 1] != 'E'
			|| lon->game.coinsdiali == 0)
		{
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				lon->game.posx * 32, lon->game.posy * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				(lon->game.posx + 1) * 32, (lon->game.posy - 1) * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgp,
				(lon->game.posx + 1) * 32, (lon->game.posy - 1) * 32);
			if (lon->map.kisma[lon->game.posy - 1][lon->game.posx + 1] == 'E')
				success(1, lon);
			lon->game.posx++;
			lon->game.posy--;
		}
	}
}

void	movement7(int pressed, t_long *lon)
{
	if (lon->map.kisma[lon->game.posy - 1][lon->game.posx - 1] == 'C')
	{
		lon->map.kisma[lon->game.posy - 1][lon->game.posx - 1] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy - 1][lon->game.posx - 1] != '1')
	{
		if (lon->map.kisma[lon->game.posy - 1][lon->game.posx - 1] != 'E'
			|| lon->game.coinsdiali == 0)
		{
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				lon->game.posx * 32, lon->game.posy * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				(lon->game.posx - 1) * 32, (lon->game.posy - 1) * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgp,
				(lon->game.posx - 1) * 32, (lon->game.posy - 1) * 32);
			if (lon->map.kisma[lon->game.posy - 1][lon->game.posx - 1] == 'E')
				success(1, lon);
			lon->game.posx--;
			lon->game.posy--;
		}
	}
}

void	movement3(int pressed, t_long *lon)
{
	if (lon->map.kisma[lon->game.posy + 1][lon->game.posx + 1] == 'C')
	{
		lon->map.kisma[lon->game.posy + 1][lon->game.posx + 1] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy + 1][lon->game.posx + 1] != '1')
	{
		if (lon->map.kisma[lon->game.posy + 1][lon->game.posx + 1] != 'E'
			|| lon->game.coinsdiali == 0)
		{
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				lon->game.posx * 32, lon->game.posy * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				(lon->game.posx + 1) * 32, (lon->game.posy + 1) * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgp,
				(lon->game.posx + 1) * 32, (lon->game.posy + 1) * 32);
			if (lon->map.kisma[lon->game.posy + 1][lon->game.posx + 1] == 'E')
				success(1, lon);
			lon->game.posx++;
			lon->game.posy++;
		}
	}
}

void	movement1(int pressed, t_long *lon)
{
	if (lon->map.kisma[lon->game.posy + 1][lon->game.posx - 1] == 'C')
	{
		lon->map.kisma[lon->game.posy + 1][lon->game.posx - 1] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy + 1][lon->game.posx - 1] != '1')
	{
		if (lon->map.kisma[lon->game.posy + 1][lon->game.posx - 1] != 'E'
			|| lon->game.coinsdiali == 0)
		{
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				lon->game.posx * 32, lon->game.posy * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				(lon->game.posx - 1) * 32, (lon->game.posy + 1) * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgp,
				(lon->game.posx - 1) * 32, (lon->game.posy + 1) * 32);
			if (lon->map.kisma[lon->game.posy + 1][lon->game.posx - 1] == 'E')
				success(1, lon);
			lon->game.posx--;
			lon->game.posy++;
		}
	}
}
