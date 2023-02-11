/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:13:56 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/11 23:00:30 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	toupperv2(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c += 0;
	}
	if (c >= '0' && c <= '9')
	{
		c += 0;
	}
	return (c);
}

void	thedestroyer(t_long *longe)
{
	mlx_destroy_image(longe->init.mlx, longe->img.img0);
	mlx_destroy_image(longe->init.mlx, longe->img.img1);
	mlx_destroy_image(longe->init.mlx, longe->img.imgp);
	mlx_destroy_image(longe->init.mlx, longe->img.imgc);
	mlx_destroy_image(longe->init.mlx, longe->img.imge);
	if (longe->init.win)
		mlx_destroy_window(longe->init.mlx, longe->init.win);
}

int	xpressed(t_long *longe)
{
	write(1, "the game exited", 15);
	thedestroyer(longe);
	exit(1);
}

void	playerondoor(t_long *longe)
{
	mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.imge,
		longe->game.posex * 32, longe->game.posey * 32);
	mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.imgp,
		longe->game.posex * 32, longe->game.posey * 32);
}

void	contentcounter(t_long *longe, int *x, int *y)
{
	if (longe->map.kisma[*y][*x] == 'P')
	{
		longe->game.playersdiali++;
		longe->game.posx = *x;
		longe->game.posy = *y;
	}
	if (longe->map.kisma[*y][*x] == 'C')
		longe->game.coinsdiali++;
	if (longe->map.kisma[*y][*x] == 'E')
	{
		longe->game.posex = *x;
		longe->game.posey = *y;
		longe->game.exitdiali++;
	}
}
