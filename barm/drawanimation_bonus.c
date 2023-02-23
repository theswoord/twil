/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawanimation_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:43:10 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/13 01:45:22 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	drawk(t_long *longe)
{
	mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0,
		longe->mon.poskx * 32, longe->mon.posky * 32);
	mlx_put_image_to_window(longe->init.mlx, longe->init.win,
		longe->anim.imgklown[rand() % 5], longe->mon.poskx * 32,
		longe->mon.posky * 32);
}

void	drawt(t_long *longe)
{
	mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0,
		longe->mon.postx * 32, longe->mon.posty * 32);
	mlx_put_image_to_window(longe->init.mlx, longe->init.win,
		longe->anim.imgtiam[rand() % 6], longe->mon.postx * 32,
		longe->mon.posty * 32);
}

void	draws(t_long *longe)
{
	mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0,
		longe->mon.possx * 32, longe->mon.possy * 32);
	mlx_put_image_to_window(longe->init.mlx, longe->init.win,
		longe->anim.imgserp[rand() % 4], longe->mon.possx * 32,
		longe->mon.possy * 32);
}

void	drawexit(t_long *longe)
{
	mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0,
		longe->game.posex * 32, longe->game.posey * 32);
	mlx_put_image_to_window(longe->init.mlx, longe->init.win,
		longe->anim.imgmakhleb[rand() % 5], longe->game.posex * 32,
		longe->game.posey * 32);
}

void	drawexitwithplayer(t_long *longe)
{
	mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0,
		longe->game.posex * 32, longe->game.posey * 32);
	mlx_put_image_to_window(longe->init.mlx, longe->init.win,
		longe->anim.imgmakhleb[rand() % 5], longe->game.posex * 32,
		longe->game.posey * 32);
	mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.imgp,
		longe->game.posex * 32, longe->game.posey * 32);
}
