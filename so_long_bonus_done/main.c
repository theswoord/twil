/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 00:14:59 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/13 18:32:33 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ch7almnline(int fd, t_long *longe)
{
	int		a;
	char	*temp;
	char	*stertwil;

	a = 0;
	stertwil = malloc(100);
	temp = get_next_line(fd);
	if (!temp)
		errors2(4, longe);
	longe->map.tol = ft_strlen(temp) - 1;
	while (temp)
	{
		stertwil = ft_strjoingnl(stertwil, temp);
		longe->map.lines++;
		freeingmachine(NULL, temp, longe);
		temp = get_next_line(fd);
	}
	if (strnstr(stertwil, "\n\n1", ft_strlen(stertwil)))
	{
		freeingmachine(NULL, stertwil, longe);
		errors2('N', longe);
	}
	longe->map.kisma = ft_split(stertwil, '\n');
	free(stertwil);
}

int	main(int argc, char **av)
{
	int		fd;
	t_long	*longe;

	longe = (t_long *)malloc(sizeof(t_long));
	ft_memset(longe, 0, sizeof(t_long));
	initialization(longe);
	longe->init.wanted = "P01EC";
	if (argc == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (ft_strnstr(av[1], ".ber", ft_strlen(av[1])) == 0)
			errors2(2, longe);
		if (fd == -1)
			errors2(3, longe);
		ch7almnline(fd, longe);
		checkmap(longe);
		rssam(longe);
	}
	errors2(1, longe);
}
