/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movementD.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 22:33:30 by nbouhali          #+#    #+#             */
/*   Updated: 2023/01/17 22:35:45 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	movement9(int pressed, tlong *longe)
{
	if (longe->kisma[longe->posy - 1][longe->posx + 1] == 'C')
	{
		longe->kisma[longe->posy - 1][longe->posx + 1] = '0';
		longe->coinsdiali--;
	}
	if (longe->kisma[longe->posy - 1][longe->posx + 1] != '1')
	{
		if (longe->kisma[longe->posy - 1][longe->posx + 1] != 'E'
			|| longe->coinsdiali == 0)
		{
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				longe->posx * 32, longe->posy * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				(longe->posx + 1) * 32, (longe->posy - 1) * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP,
				(longe->posx + 1) * 32, (longe->posy - 1) * 32);
			if (longe->kisma[longe->posy - 1][longe->posx + 1] == 'E')
				success(longe);
			longe->posx++;
			longe->posy--;
		}
	}
}

void	movement7(int pressed, tlong *longe)
{
	if (longe->kisma[longe->posy - 1][longe->posx - 1] == 'C')
	{
		longe->kisma[longe->posy - 1][longe->posx - 1] = '0';
		longe->coinsdiali--;
	}
	if (longe->kisma[longe->posy - 1][longe->posx - 1] != '1')
	{
		if (longe->kisma[longe->posy - 1][longe->posx - 1] != 'E'
			|| longe->coinsdiali == 0)
		{
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				longe->posx * 32, longe->posy * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				(longe->posx - 1) * 32, (longe->posy - 1) * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP,
				(longe->posx - 1) * 32, (longe->posy - 1) * 32);
			if (longe->kisma[longe->posy - 1][longe->posx - 1] == 'E')
				success(longe);
			longe->posx--;
			longe->posy--;
		}
	}
}

void	movement3(int pressed, tlong *longe)
{
	if (longe->kisma[longe->posy + 1][longe->posx + 1] == 'C')
	{
		longe->kisma[longe->posy + 1][longe->posx + 1] = '0';
		longe->coinsdiali--;
	}
	if (longe->kisma[longe->posy + 1][longe->posx + 1] != '1')
	{
		if (longe->kisma[longe->posy + 1][longe->posx + 1] != 'E'
			|| longe->coinsdiali == 0)
		{
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				longe->posx * 32, longe->posy * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				(longe->posx + 1) * 32, (longe->posy + 1) * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP,
				(longe->posx + 1) * 32, (longe->posy + 1) * 32);
			if (longe->kisma[longe->posy + 1][longe->posx + 1] == 'E')
				success(longe);
			longe->posx++;
			longe->posy++;
		}
	}
}

void	movement1(int pressed, tlong *longe)
{
	if (longe->kisma[longe->posy + 1][longe->posx - 1] == 'C')
	{
		longe->kisma[longe->posy + 1][longe->posx - 1] = '0';
		longe->coinsdiali--;
	}
	if (longe->kisma[longe->posy + 1][longe->posx - 1] != '1')
	{
		if (longe->kisma[longe->posy + 1][longe->posx - 1] != 'E'
			|| longe->coinsdiali == 0)
		{
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				longe->posx * 32, longe->posy * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				(longe->posx - 1) * 32, (longe->posy + 1) * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP,
				(longe->posx - 1) * 32, (longe->posy + 1) * 32);
			if (longe->kisma[longe->posy + 1][longe->posx - 1] == 'E')
				success(longe);
			longe->posx--;
			longe->posy++;
		}
	}
}
