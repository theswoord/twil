/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 23:18:27 by nbouhali          #+#    #+#             */
/*   Updated: 2023/01/18 23:34:09 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	movementdown(int pressed, tlong *longe)
{
	if (longe->kisma[longe->posy + 1][longe->posx] == 'C')
	{
		longe->kisma[longe->posy + 1][longe->posx] = '0';
		longe->coinsdiali--;
	}
	if (longe->kisma[longe->posy + 1][longe->posx] != '1')
	{
		if (longe->kisma[longe->posy + 1][longe->posx] != 'E'
			|| longe->coinsdiali == 0)
		{
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				longe->posx * 32, longe->posy * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				longe->posx * 32, (longe->posy + 1) * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP,
				longe->posx * 32, (longe->posy + 1) * 32);
			if (longe->kisma[longe->posy + 1][longe->posx] == 'E')
				success(longe);
			longe->posy++;
	longe-> pas++;
	ft_printf("player moved [%d] times\n", longe->pas);
		}
	}
}

void	movementup(int pressed, tlong *longe)
{
	if (longe->kisma[longe->posy - 1][longe->posx] == 'C')
	{
		longe->kisma[longe->posy - 1][longe->posx] = '0';
		longe->coinsdiali--;
	}
	if (longe->kisma[longe->posy - 1][longe->posx] != '1')
	{
		if (longe->kisma[longe->posy - 1][longe->posx] != 'E'
			|| longe->coinsdiali == 0)
		{
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				longe->posx * 32, longe->posy * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				longe->posx * 32, (longe->posy - 1) * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP,
				longe->posx * 32, (longe->posy - 1) * 32);
			if (longe->kisma[longe->posy - 1][longe->posx] == 'E')
				success(longe);
			longe->posy--;
			longe-> pas++;
	ft_printf("player moved [%d] times\n", longe->pas);
		}
	}
}

void	movementleft(int pressed, tlong *longe)
{
	if (longe->kisma[longe->posy][longe->posx - 1] == 'C')
	{
		longe->kisma[longe->posy][longe->posx - 1] = '0';
		longe->coinsdiali--;
	}
	if (longe->kisma[longe->posy][longe->posx - 1] != '1')
	{
		if (longe->kisma[longe->posy][longe->posx - 1] != 'E'
			|| longe->coinsdiali == 0)
		{
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				longe->posx * 32, longe->posy * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				(longe->posx - 1) * 32, longe->posy * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP,
				(longe->posx - 1) * 32, longe->posy * 32);
			if (longe->kisma[longe->posy][longe->posx - 1] == 'E')
				success(longe);
			longe->posx--;
			longe-> pas++;
	ft_printf("player moved [%d] times\n", longe->pas);
		}
	}
}

void	movementright(int pressed, tlong *longe)
{
	if (longe->kisma[longe->posy][longe->posx + 1] == 'C')
	{
		longe->kisma[longe->posy][longe->posx + 1] = '0';
		longe->coinsdiali--;
	}
	if (longe->kisma[longe->posy][longe->posx + 1] != '1')
	{
		if (longe->kisma[longe->posy][longe->posx + 1] != 'E'
			|| longe->coinsdiali == 0)
		{
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				longe->posx * 32, longe->posy * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->image0,
				(longe->posx + 1) * 32, longe->posy * 32);
			mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP,
				(longe->posx + 1) * 32, longe->posy * 32);
			if (longe->kisma[longe->posy][longe->posx + 1] == 'E')
				success(longe);
			longe->posx++;
			longe-> pas++;
	ft_printf("player moved [%d] times\n", longe->pas);
		}
	}
}
