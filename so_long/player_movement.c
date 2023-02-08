/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:18:27 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/08 22:43:15 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	movementdown(t_long *lon)
{
	if (lon->map.kisma[lon->game.posy + 1][lon->game.posx] == 'C')
	{
		lon->map.kisma[lon->game.posy + 1][lon->game.posx] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy + 1][lon->game.posx] != '1')
	{
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
			lon->game.posx * 32, lon->game.posy * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
			lon->game.posx * 32, (lon->game.posy + 1) * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgp,
			lon->game.posx * 32, (lon->game.posy + 1) * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imge,
			lon->game.posex * 32, lon->game.posey * 32);
		if (lon->map.kisma[lon->game.posy + 1][lon->game.posx] == 'E')
			playerondoor(lon);
		if (lon->map.kisma[lon->game.posy + 1][lon->game.posx] == 'E'
			&& lon->game.coinsdiali == 0)
			success(lon);
		lon->game.posy++;
		lon->game.pas++;
		ft_printf("player moved [%d] times\n", lon->game.pas);
	}
}

void	movementup(t_long *lon)
{
	if (lon->map.kisma[lon->game.posy - 1][lon->game.posx] == 'C')
	{
		lon->map.kisma[lon->game.posy - 1][lon->game.posx] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy - 1][lon->game.posx] != '1')
	{
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
			lon->game.posx * 32, lon->game.posy * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
			lon->game.posx * 32, (lon->game.posy - 1) * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgp,
			lon->game.posx * 32, (lon->game.posy - 1) * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imge,
			lon->game.posex * 32, lon->game.posey * 32);
		if (lon->map.kisma[lon->game.posy - 1][lon->game.posx] == 'E')
			playerondoor(lon);
		if (lon->map.kisma[lon->game.posy - 1][lon->game.posx] == 'E'
			&& lon->game.coinsdiali == 0)
			success(lon);
		lon->game.posy--;
		lon->game.pas++;
		ft_printf("player moved [%d] times\n", lon->game.pas);
	}
}

void	movementleft(t_long *lon)
{
	if (lon->map.kisma[lon->game.posy][lon->game.posx - 1] == 'C')
	{
		lon->map.kisma[lon->game.posy][lon->game.posx - 1] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy][lon->game.posx - 1] != '1')
	{
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
			lon->game.posx * 32, lon->game.posy * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
			(lon->game.posx - 1) * 32, lon->game.posy * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgp,
			(lon->game.posx - 1) * 32, lon->game.posy * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imge,
			lon->game.posex * 32, lon->game.posey * 32);
		if (lon->map.kisma[lon->game.posy][lon->game.posx - 1] == 'E')
			playerondoor(lon);
		if (lon->map.kisma[lon->game.posy][lon->game.posx - 1] == 'E'
			&& lon->game.coinsdiali == 0)
			success(lon);
		lon->game.posx--;
		lon->game.pas++;
		ft_printf("player moved [%d] times\n", lon->game.pas);
	}
}

void	movementright(t_long *lon)
{
	if (lon->map.kisma[lon->game.posy][lon->game.posx + 1] == 'C')
	{
		lon->map.kisma[lon->game.posy][lon->game.posx + 1] = '0';
		lon->game.coinsdiali--;
	}
	if (lon->map.kisma[lon->game.posy][lon->game.posx + 1] != '1')
	{
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
			lon->game.posx * 32, lon->game.posy * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.img0,
			(lon->game.posx + 1) * 32, lon->game.posy * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imgp,
			(lon->game.posx + 1) * 32, lon->game.posy * 32);
		mlx_put_image_to_window(lon->init.mlx, lon->init.win, lon->img.imge,
			lon->game.posex * 32, lon->game.posey * 32);
		if (lon->map.kisma[lon->game.posy][lon->game.posx + 1] == 'E')
			playerondoor(lon);
		if (lon->map.kisma[lon->game.posy][lon->game.posx + 1] == 'E'
			&& lon->game.coinsdiali == 0)
			success(lon);
		lon->game.posx++;
		lon->game.pas++;
		ft_printf("player moved [%d] times\n", lon->game.pas);
	}
}
