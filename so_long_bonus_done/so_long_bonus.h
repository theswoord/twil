/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouhali <nbouhali@student.1337.ma >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:36:22 by nbouhali          #+#    #+#             */
/*   Updated: 2023/02/13 18:36:29 by nbouhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include "gnl/get_next_line.h"
# include "libft/libft.h"
# include "printf/ft_printf.h"
# include <mlx.h>

enum
{
	DIAG1 = 83,
	NUMDOWN = 84,
	DIAG3 = 85,
	NUMLEFT = 86,
	NUMRIGHT = 88,
	DIAG7 = 89,
	NUMUP = 91,
	DIAG9 = 92,
	W = 13,
	A = 0,
	S = 1,
	D = 2,
	UP = 126,
	LEFT = 123,
	DOWN = 125,
	RIGHT = 124,
	ESC = 53,
};

typedef struct s_map
{
	int			tol;
	int			lines;
	char		**kisma;
	int			i;
	int			j;
	int			physicallines;
}				t_map;
typedef struct s_game
{
	int			posx;
	int			posy;
	int			coinsdiali;
	int			playersdiali;
	int			exitdiali;
	int			posex;
	int			posey;
	int			prize;
	int			pas;
}				t_game;
typedef struct s_init
{
	const char	*wanted;
	void		*mlx;
	void		*win;
	void		*img;

}				t_init;
typedef struct s_img
{
	int			img_width;
	int			img_height;
	char		*player;
	char		*coin;
	char		*wall;
	char		*floor;
	void		*imgp;
	void		*imgc;
	void		*img0;
	void		*img1;
}				t_img;
typedef struct s_anim
{
	char		*makhleb[6];
	void		*imgmakhleb[6];
	char		*klown[5];
	void		*imgklown[5];
	char		*serpent[4];
	void		*imgserp[4];
	char		*tiamat[6];
	void		*imgtiam[6];

}				t_anim;
typedef struct s_mon
{
	int			poskx;
	int			posky;
	int			possx;
	int			possy;
	int			postx;
	int			posty;
	int			tdiali;
	int			sdiali;
	int			kdiali;
}				t_mon;
typedef struct s_long
{
	t_init		init;
	t_map		map;
	t_game		game;
	t_img		img;
	t_anim		anim;
	t_mon		mon;
}				t_long;

void			rssam(t_long *longe);
void			ch7almnline(int fd, t_long *longe);
void			checkmap(t_long *longe);
void			checkwalls(t_long *longe);
void			errors(int code, t_long *longe);
void			errors2(int code, t_long *longe);
void			errorshell(int code, char *p, t_long *longe);
void			drawandmove(t_long *longe);
void			movementright(t_long *lon);
void			movementup(t_long *lon);
void			movementdown(t_long *lon);
void			movementleft(t_long *lon);
void			success(int result, t_long *longe);
int				safe(int x, int y, t_long *longe, char **visited);
int				path(t_long *longe);
void			freeingmachine(char **visited, void *p, t_long *longe);
void			mapread(t_long *longe);
int				toupperv2(int c);
void			initialization(t_long *longe);
void			actualdraw(t_long *longe);
void			initserp(t_long *longe);
int				pressed(int pressed, t_long *longe);
int				theclock(t_long *longe);
void			animation_makhleb(t_long *longe);
void			initklown(t_long *longe);
int				xpressed(t_long *longe);
void			inittiamat(t_long *longe);
void			draws(t_long *longe);
void			drawk(t_long *longe);
void			drawt(t_long *longe);
void			drawexit(t_long *longe);
void			drawrosom(t_long *longe);
void			monmov(t_long *longe);
void			randommovementk(t_long *longe);
void			randommovementt(t_long *longe);
void			randommovements(t_long *longe);
void			thedestroyer(t_long *longe);
void			monsterchecker(t_long *longe, int *x, int *y);
void			affpas(t_long *longe);
void			drawexitwithplayer(t_long *longe);
void			tick1(t_long *longe);
void			tick2(t_long *longe);
void			tick3(t_long *longe);
void			freethesplitproblem(char **visited, t_long *longe);
#endif