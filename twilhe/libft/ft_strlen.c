/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:52:13 by nbouhali          #+#    #+#             */
/*   Updated: 2023/01/21 23:12:03 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *a)
{
	size_t	b;

	b = 0;
	if (a == NULL)
	{
		ft_putstr_fd("lalalalala", 1);
		return (0);
	}
	while (a[b])
	{
		b++;
	}
	return (b);
}
