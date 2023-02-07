/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out_put.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:48:51 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/07 23:43:57 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	success(int result, t_long *longe)
{
	if (result == 1)
	{
		write(1, "good job you won. wow!", 22);
		freeingmachine(longe->map.kisma, NULL, longe);
		free(longe);
		exit(0);
	}
	if (result == 0)
	{
		thedestroyer(longe);
		freeingmachine(longe->map.kisma, NULL, longe);
		free(longe);
		exit(0);
	}
}

void	errors(int code, t_long *longe)
{
	if (code == 1)
		ft_printf("Error\n3ndk mochkil f map check input P = %d E = %d C= %d",
			longe->game.playersdiali,
			longe->game.exitdiali,
			longe->game.coinsdiali);
	if (code == 2)
		write(1, "Error\n3ndk mochkil f map, check tol o l3rd", 42);
	if (code == 3)
		write(1, "Error\n3ndk mochkil f map, check walls o mo7it", 45);
	if (code == 4)
		write(1, "Error\nnot a valid map, there is no valid path", 45);
	if (code == 5)
		ft_printf("Error\nyou have a weird letter there , it only includes %s",
			longe->init.wanted);
	thedestroyer(longe);
	freeingmachine(longe->map.kisma, NULL, longe);
	free(longe);
	exit(1);
}

void	errors2(int code, t_long *longe)
{
	if (code == 1)
		write(1, "Error\n3ndk mochkil f arguments, rah ghir 1 li khassna", 53);
	if (code == 2)
		write(1, "Error\nFinahya \".ber\" a sadi9", 28);
	if (code == 3)
		write(1, "Error\nYour map ain't working buddy", 34);
	if (code == 4)
		write(1, "Error\nYour Map khawya a sahbi", 29);
	if (code == 5)
	{
		ft_printf("Error\nYou have the wrong monsters count");
		ft_printf(": Killer =%d elementalist = %d Tiamat = %d",
			longe->mon.kdiali,
			longe->mon.sdiali,
			longe->mon.tdiali);
	}
	thedestroyer(longe);
	freeingmachine(longe->map.kisma, NULL, longe);
	free(longe);
	exit(1);
}

int	xpressed(t_long *longe)
{
	write(1, "the game exited", 15);
	thedestroyer(longe);
	freeingmachine(longe->map.kisma, NULL, longe);
	free(longe);
	exit(1);
}
