/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:18:27 by nbouhali          #+#    #+#             */
/*   Updated: 2023/01/21 22:06:51 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	movementdown(int pressed, t_long *lon)
{
	if (lon->map.kisma[lon->game.posy + 1][lon->game.posx] == 'C')
	{
		lon->map.kisma[lon->game.posy + 1][lon->game.posx] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy + 1][lon->game.posx] != '1')
	{
		if (lon->map.kisma[lon->game.posy + 1][lon->game.posx] != 'E'
			|| lon->game.coinsdiali == 0)
		{
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				lon->game.posx * 32, lon->game.posy * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				lon->game.posx * 32, (lon->game.posy + 1) * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgP,
				lon->game.posx * 32, (lon->game.posy + 1) * 32);
			if (lon->map.kisma[lon->game.posy + 1][lon->game.posx] == 'E')
				success(lon);
			lon->game.posy++;
	lon-> game.pas++;
			ft_printf("player moved [%d] times\n", lon->game.pas);
		}
	}
}

void	movementup(int pressed, t_long *lon)
{
	if (lon->map.kisma[lon->game.posy - 1][lon->game.posx] == 'C')
	{
		lon->map.kisma[lon->game.posy - 1][lon->game.posx] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy - 1][lon->game.posx] != '1')
	{
		if (lon->map.kisma[lon->game.posy - 1][lon->game.posx] != 'E'
			|| lon->game.coinsdiali == 0)
		{
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				lon->game.posx * 32, lon->game.posy * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				lon->game.posx * 32, (lon->game.posy - 1) * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgP,
				lon->game.posx * 32, (lon->game.posy - 1) * 32);
			if (lon->map.kisma[lon->game.posy - 1][lon->game.posx] == 'E')
				success(lon);
			lon->game.posy--;
			lon-> game.pas++;
			ft_printf("player moved [%d] times\n", lon->game.pas);
		}
	}
}

void	movementleft(int pressed, t_long *lon)
{
	if (lon->map.kisma[lon->game.posy][lon->game.posx - 1] == 'C')
	{
		lon->map.kisma[lon->game.posy][lon->game.posx - 1] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy][lon->game.posx - 1] != '1')
	{
		if (lon->map.kisma[lon->game.posy][lon->game.posx - 1] != 'E'
			|| lon->game.coinsdiali == 0)
		{
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				lon->game.posx * 32, lon->game.posy * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				(lon->game.posx - 1) * 32, lon->game.posy * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgP,
				(lon->game.posx - 1) * 32, lon->game.posy * 32);
			if (lon->map.kisma[lon->game.posy][lon->game.posx - 1] == 'E')
				success(lon);
			lon->game.posx--;
			lon-> game.pas++;
			ft_printf("player moved [%d] times\n", lon->game.pas);
		}
	}
}

void	movementright(int pressed, t_long *lon)
{
	if (lon->map.kisma[lon->game.posy][lon->game.posx + 1] == 'C')
	{
		lon->map.kisma[lon->game.posy][lon->game.posx + 1] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy][lon->game.posx + 1] != '1')
	{
		if (lon->map.kisma[lon->game.posy][lon->game.posx + 1] != 'E'
			|| lon->game.coinsdiali == 0)
		{
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				lon->game.posx * 32, lon->game.posy * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
				(lon->game.posx + 1) * 32, lon->game.posy * 32);
			mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgP,
				(lon->game.posx + 1) * 32, lon->game.posy * 32);
			if (lon->map.kisma[lon->game.posy][lon->game.posx + 1] == 'E')
				success(lon);
			lon->game.posx++;
			lon-> game.pas++;
			ft_printf("player moved [%d] times\n", lon->game.pas);
		}
	}
}
