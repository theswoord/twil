#ifndef SO_LONG_H
#define SO_LONG_H

#include "libft/libft.h"
#include "printf/ft_printf.h"
#include "gnl/get_next_line.h"
#include <math.h>
#include <mlx.h>

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


typedef struct smap
{
    int tol;
    int lines;
    char **kisma;
}tmap;
typedef struct sgame
{
    int posx;
    int posy;
    int coinsdiali;
    int playersdiali;
    int exitdiali;
    int prize;
    int pas;
} tgame;
typedef struct sinit
{
    void *mlx;
    void *win;
    void *img;

} tinit;
typedef struct simg
{
    int img_width;
    int img_height;
    char *player;
    char *coin;
    char *exit;
    char *wall;
    char *floor;
    void *imgP;
    void *imgC;
    void *imgE;
    void *img0;
    void *img1;
} timg;
typedef struct s_long
{
 
    tinit init;
    tmap map;
    tgame game;
    timg img;
} t_long;
// typedef struct simg
// {
//     char *img;
//     int i;
//     int z;
// }            timg;

void rssam(t_long *longe);
void ch7almnline(int fd, t_long *longe);
void checkmap(t_long *longe);
void checkwalls(t_long *longe);
void errors(int code, t_long *longe);
void drawandmove(t_long *longe);
void movementright(int pressed, t_long *lon);
void movementup(int pressed, t_long *lon);
void movementdown(int pressed, t_long *lon);
void movementleft(int pressed, t_long *lon);
void success(t_long *longe);
void movement9(int pressed, t_long *lon);
void movement7(int pressed, t_long *lon);
void movement3(int pressed, t_long *lon);
void movement1(int pressed, t_long *lon);
int pressedD(int pressed, t_long *longe);
int safe(int x, int y, t_long *longe, char **visited);
int path(t_long *longe);
void freeingmachine(char **visited, void *p, t_long *longe);
// void pixelput(t_long *data, int x, int y, int color);

#endif