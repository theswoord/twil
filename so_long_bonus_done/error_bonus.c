/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:53:49 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/13 18:41:19 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	errorshell(int code, char *p, t_long *longe)
{
	if (code == 2)
	{
		write(1, "Error\nthere is a lot of \"\\n\"", 29);
		thedestroyer(longe);
		freeingmachine(NULL, p, longe);
		longe = NULL;
		free(longe);
		exit(0);
	}
	if (code == 6)
	{
		write(1, "Error\nthere is a lot of \"\\n\"", 29);
		thedestroyer(longe);
		freethesplitproblem(longe->map.kisma, longe);
		longe = NULL;
		free(longe);
		exit(0);
	}
}
