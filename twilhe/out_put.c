/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out_put.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 21:48:51 by nbouhali          #+#    #+#             */
/*   Updated: 2023/01/26 13:09:52 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	freeingmachine(char **visited, void *p, t_long *longe)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
        printf("\nl%dl\n",longe->map.lines);
        
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

void	success(t_long *longe)
{
	write(1, "good job you won. wow!", 22);
	free(longe->map.kisma);
    // while(1){}
	exit(0);
}

void	errors(int code, t_long *longe)
{
	if (code == 1)
	{
		write(1, "3ndk mochkil f map check input", 30);
		// freeingmachine(longe->map.kisma, NULL, NULL);
		exit(0);
	}
	if (code == 2)
	{
		write(1, "3ndk mochkil f map check map.tol o l3rd", 39);

		exit(0);
	}
	if (code == 3)
	{
		write(1, "3ndk mochkil f map check walls o mo7it", 38);
		freeingmachine(longe->map.kisma, NULL, NULL);
		exit(0);
	}
	if (code == 4)
	{
		write(1, "not a valid map , there is no valid path", 40);
		// freeingmachine(longe->map.kisma, NULL, NULL);
		exit(0);
	}
}
void errors2(int code, t_long *longe){
    if (code == 1 ){
        write(1, "3ndk mochkil f arguments , rah ghir 1 li khassna", 48);
        free(longe);
        exit(1);
    }
    
}