/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:09:47 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/04 18:35:00 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	initserp(t_long *longe)
{
	longe->anim.serpent[0] = "./textures/element1.XPM";
	longe->anim.serpent[1] = "./textures/element2.XPM";
	longe->anim.serpent[2] = "./textures/element3.XPM";
	longe->anim.serpent[3] = "./textures/element4.XPM";
	longe->anim.imgserp[0] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.serpent[0], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgserp[1] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.serpent[1], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgserp[2] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.serpent[2], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgserp[3] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.serpent[3], &longe->img.img_width,
			&longe->img.img_height);
}

void	initklown(t_long *longe)
{
	longe->anim.klown[0] = "./textures/killer_klown_blue.XPM";
	longe->anim.klown[1] = "./textures/killer_klown_green.XPM";
	longe->anim.klown[2] = "./textures/killer_klown_purple.XPM";
	longe->anim.klown[3] = "./textures/killer_klown_red.XPM";
	longe->anim.klown[4] = "./textures/killer_klown_yellow.XPM";
	longe->anim.imgklown[0] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.klown[0], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgklown[1] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.klown[1], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgklown[2] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.klown[2], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgklown[3] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.klown[3], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgklown[4] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.klown[4], &longe->img.img_width,
			&longe->img.img_height);
}

void	animation_makhleb(t_long *longe)
{
	longe->anim.makhleb[0] = "./textures/makhleb1.XPM";
	longe->anim.makhleb[1] = "./textures/makhleb2.XPM";
	longe->anim.makhleb[2] = "./textures/makhleb3.XPM";
	longe->anim.makhleb[3] = "./textures/makhleb4.XPM";
	longe->anim.makhleb[4] = "./textures/makhleb5.XPM";
	longe->anim.makhleb[5] = "./textures/makhleb6.XPM";
	longe->anim.imgmakhleb[0] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.makhleb[0], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgmakhleb[1] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.makhleb[1], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgmakhleb[2] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.makhleb[2], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgmakhleb[3] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.makhleb[3], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgmakhleb[4] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.makhleb[4], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgmakhleb[5] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.makhleb[5], &longe->img.img_width,
			&longe->img.img_height);
}

void	inittiamat(t_long *longe)
{
	longe->anim.tiamat[0] = "./textures/ugly.XPM";
	longe->anim.tiamat[1] = "./textures/ugly1.XPM";
	longe->anim.tiamat[2] = "./textures/ugly2.XPM";
	longe->anim.tiamat[3] = "./textures/ugly3.XPM";
	longe->anim.tiamat[4] = "./textures/ugly4.XPM";
	longe->anim.tiamat[5] = "./textures/ugly5.XPM";
	longe->anim.imgtiam[0] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.tiamat[0], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgtiam[1] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.tiamat[1], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgtiam[2] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.tiamat[2], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgtiam[3] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.tiamat[3], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgtiam[4] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.tiamat[4], &longe->img.img_width,
			&longe->img.img_height);
	longe->anim.imgtiam[5] = mlx_xpm_file_to_image(longe->init.mlx,
			longe->anim.tiamat[5], &longe->img.img_width,
			&longe->img.img_height);
}

int	animateitmakhleb(t_long *longe)
{
	static int	b;

	b++;
	monmov(longe);
	if (b == 1)
	{
          
            //   mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0,16,32);
        	// mlx_string_put(longe->init.mlx,longe->init.win,16,32,16777215,ft_itoa(longe->game.pas));
		drawrosom(longe);
		randommovementk(longe);
		drawexit(longe);
	}
	if (b == 300)
	{
		drawrosom(longe);
		randommovements(longe);
		drawexit(longe);
	}
	if (b == 600)
	{
		drawrosom(longe);
		randommovementt(longe);
		drawexit(longe);
		b = 0;
	}
	usleep(400);
	return (0);
}
