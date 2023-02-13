/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out_put.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:48:51 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/13 18:33:26 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
}

void	success(t_long *longe)
{
	write(1, "good job you won. wow!", 22);
	thedestroyer(longe);
	freeingmachine(longe->map.kisma, NULL, longe);
	longe = NULL;
	free(longe);
	exit(0);
}

void	errors(int code, t_long *longe)
{
	if (code == 1)
		write(1, "Error\n3ndk mochkil f map check input", 36);
	if (code == 2)
		write(1, "Error\n3ndk mochkil f map, check tol o l3rd", 42);
	if (code == 3)
		write(1, "Error\n3ndk mochkil f map, check walls o mo7it", 45);
	if (code == 4)
		write(1, "Error\nnot a valid map, there is no valid path", 45);
	if (code == 5)
	{
		write(1, "Error\nthere is a lot of \"\\n\"", 29);
		thedestroyer(longe);
		freethesplitproblem(longe->map.kisma, longe);
		longe = NULL;
		free(longe);
		exit(0);
	}
	thedestroyer(longe);
	freeingmachine(longe->map.kisma, NULL, longe);
	longe = NULL;
	free(longe);
	exit(0);
}

void	errors2(int code, t_long *longe)
{
	if (code == 1)
		write(1, "Error\n3ndk mochkil f arguments, rah ghir 1 li khassna", 53);
	if (code == 2)
		write(1, "Error\nfinahya \".ber\" a sadi9", 28);
	if (code == 3)
		write(1, "Error\nyour map ain't working buddy", 34);
	if (code == 4)
		write(1, "Error\nYour Map khawya a sahbi", 29);
	if (code == 'N')
	{
		write(1, "Error\nthere is a lot of \"\\n\"", 29);
		thedestroyer(longe);
		longe = NULL;
		free(longe);
		exit(0);
	}
	thedestroyer(longe);
	freeingmachine(longe->map.kisma, NULL, longe);
	longe = NULL;
	free(longe);
	exit(0);
}

void	freethesplitproblem(char **visited, t_long *longe)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	if (visited)
	{
		while (a < longe->map.physicallines)
		{
			free(visited[a]);
			a++;
		}
		free(visited);
	}
}
