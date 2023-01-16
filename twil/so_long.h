#ifndef SO_LONG_H
#define SO_LONG_H

#include "libft/libft.h"
#include "printf/ft_printf.h"
#include "gnl/get_next_line.h"
#include <math.h>
#include <mlx.h>

typedef struct slong
{
    void *img;
    char *adress;
    int bits;
    int tol;
    int l3rd;
    char **kisma;
    char *player;
    char *coin;
    char *exit;
    char *wall;
    char *floor;
    // timg coin;
    // timg wall;
    int posx;
    int posy;
    int lines;
    int coinsdiali;
    int playersdiali;
    int exitdiali;
}            tlong;
// typedef struct simg
// {
//     char *img;
//     int i;
//     int z;
// }            timg;

void rssam(tlong *longe);
void ch7almnline(int fd, tlong *longe);
void checkmap(tlong *longe);
void errors(int code, tlong*longe );
// void pixelput(tlong *data, int x, int y, int color);

#endif