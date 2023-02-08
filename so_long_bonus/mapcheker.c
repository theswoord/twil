/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcheker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:35:54 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/08 12:28:16 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	checkmap(t_long *longe)
{
	int	a;

	a = 0;
	while (longe->map.kisma[a])
	{
		if (ft_strlen(longe->map.kisma[a]) != longe->map.tol)
		{
			errors(2, longe);
		}
		a++;
	}
	if (longe->map.lines != a)
		errors(2, longe);
	mapread(longe);
	if (longe->game.playersdiali != 1 || longe->game.exitdiali != 1
		|| longe->game.coinsdiali == 0)
		errors(1, longe);
	if (longe->mon.kdiali != 1 || longe->mon.sdiali != 1
		|| longe->mon.tdiali != 1)
		errors2(5, longe);
	checkwalls(longe);
	if (path(longe) == 0)
		errors(4, longe);
}

void	checkwalls(t_long *longe)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < longe->map.lines)
	{
		if (longe->map.kisma[y][0] != '1')
			errors(3, longe);
		if (longe->map.kisma[y][longe->map.tol - 1] != '1')
			errors(3, longe);
		while (x < longe->map.tol)
		{
			if (longe->map.kisma[0][x] != '1')
				errors(3, longe);
			if (longe->map.kisma[longe->map.lines - 1][x] != '1')
				errors(3, longe);
			x++;
		}
		x = 0;
		y++;
	}
}

int	path(t_long *longe)
{
	int		x;
	int		y;
	int		a;
	int		i;
	char	**visited;

	x = longe->game.posx;
	y = longe->game.posy;
	a = 0;
	i = 0;
	visited = malloc(longe->map.lines * sizeof(char *));
	while (i < longe->map.lines)
	{
		visited[i] = malloc(longe->map.tol * sizeof(char));
		i++;
	}
	a = safe(x, y, longe, visited);
	freeingmachine(visited, NULL, longe);
	return (a);
}

int	safe(int x, int y, t_long *longe, char **visited)
{
	if ((longe->map.kisma[y][x] == '0' || longe->map.kisma[y][x] == 'C'
			|| longe->map.kisma[y][x] == 'P' || longe->map.kisma[y][x] == 'E'
			|| longe->map.kisma[y][x] == 'S' || longe->map.kisma[y][x] == 'T'
			|| longe->map.kisma[y][x] == 'K') && visited[y][x] != 'V')
	{
		visited[y][x] = 'V';
		if (longe->map.kisma[y][x] == 'E' || longe->map.kisma[y][x] == 'C')
		{
			longe->game.prize++;
			if (longe->game.prize == longe->game.coinsdiali + 1)
				return (1);
		}
		if (safe(x, y - 1, longe, visited) == 1)
			return (1);
		if (safe(x, y + 1, longe, visited) == 1)
			return (1);
		if (safe(x - 1, y, longe, visited) == 1)
			return (1);
		if (safe(x + 1, y, longe, visited) == 1)
			return (1);
	}
	return (0);
}

void	mapread(t_long *longe)
{
	static int	x;
	static int	y;

	while (y < longe->map.lines)
	{
		while (x < longe->map.tol)
		{
			if (ft_strchr(longe->init.wanted,
					(toupperv2(longe->map.kisma[y][x]))) == 0)
				errors(5, longe);
			if (longe->map.kisma[y][x] == 'P')
			{
				longe->game.playersdiali++;
				longe->game.posx = x;
				longe->game.posy = y;
			}
			if (longe->map.kisma[y][x] == 'C')
				longe->game.coinsdiali++;
			monsterchecker(longe, &x, &y);
			x++;
		}
		x = 0;
		y++;
	}
}
