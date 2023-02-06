/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:13:56 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/06 23:18:01 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	toupperv2(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	if (c >= '0' && c <= '9')
	{
		c += 0;
	}
	return (c);
}

void	monsterchecker(t_long *longe, int *x, int *y)
{
	if (longe->map.kisma[*y][*x] == 'T')
	{
		longe->mon.tdiali++;
		longe->mon.postx = *x;
		longe->mon.posty = *y;
	}
	if (longe->map.kisma[*y][*x] == 'S')
	{
		longe->mon.sdiali++;
		longe->mon.possx = *x;
		longe->mon.possy = *y;
	}
	if (longe->map.kisma[*y][*x] == 'K')
	{
		longe->mon.kdiali++;
		longe->mon.poskx = *x;
		longe->mon.posky = *y;
	}
	if (longe->map.kisma[*y][*x] == 'E')
	{
		longe->game.exitdiali++;
		longe->game.posex = *x;
		longe->game.posey = *y;
	}
}

void	thedestroyer(t_long *longe)
{
	int	a;

	a = 0;
	while (a < 4)
		mlx_destroy_image(longe->init.mlx, longe->anim.imgserp[a++]);
	a = 0;
	while (a < 5)
		mlx_destroy_image(longe->init.mlx, longe->anim.imgklown[a++]);
	a = 0;
	while (a < 6)
		mlx_destroy_image(longe->init.mlx, longe->anim.imgtiam[a++]);
	a = 0;
	while (a < 6)
		mlx_destroy_image(longe->init.mlx, longe->anim.imgmakhleb[a++]);
	mlx_destroy_image(longe->init.mlx, longe->img.img0);
	mlx_destroy_image(longe->init.mlx, longe->img.img1);
	mlx_destroy_image(longe->init.mlx, longe->img.imgp);
	mlx_destroy_image(longe->init.mlx, longe->img.imgc);
}

void	freeingmachine(char **visited, void *p, t_long *longe)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	if (visited)
	{
		while (a < longe->map.lines)
		{
			free(visited[a]);
			a++;
		}
		free(visited);
	}
	if (a < longe->map.lines)
	{
		free(p);
		a++;
	}
	return ;
}

void	drawrosom(t_long *longe)
{
	draws(longe);
	drawt(longe);
	drawk(longe);
}
