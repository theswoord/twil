/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:18:27 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/06 23:17:09 by nbouhali         ###   ########.fr       */
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
		if (lon->map.kisma[lon->game.posy + 1][lon->game.posx] == 'E'
			&& lon->game.coinsdiali == 0)
			success(1, lon);
		lon->game.posy++;
		lon->game.pas++;
		affpas(lon);
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
		if (lon->map.kisma[lon->game.posy - 1][lon->game.posx] == 'E'
			&& lon->game.coinsdiali == 0)
			success(1, lon);
		lon->game.posy--;
		lon->game.pas++;
		affpas(lon);
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
		if (lon->map.kisma[lon->game.posy][lon->game.posx - 1] == 'E'
			&& lon->game.coinsdiali == 0)
			success(1, lon);
		lon->game.posx--;
		lon->game.pas++;
		affpas(lon);
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
		if (lon->map.kisma[lon->game.posy][lon->game.posx + 1] == 'E'
			&& lon->game.coinsdiali == 0)
			success(1, lon);
		lon->game.posx++;
		lon->game.pas++;
		affpas(lon);
	}
}

void	affpas(t_long *longe)
{
	char	*moves;

	moves = ft_itoa(longe->game.pas);
	mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img1,
		(longe->map.tol * 32) / 2, 0);
	mlx_string_put(longe->init.mlx, longe->init.win, (longe->map.tol * 32) / 2,
		0, 16777215, moves);
	free(moves);
}
