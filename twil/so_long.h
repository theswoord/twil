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

    ESC = 50,
};

typedef struct slong
{
    void *mlx;
    void *window;
    void *img;

    int img_width;
    int img_height;
    int tol;
    int lines;
    char **kisma;
    char *player;
    char *coin;
    char *exit;
    char *wall;
    char *floor;
    void *imageP;
    void *imageC;
    void *imageE;
    void *image0;
    void *image1;
    // timg coin;
    // timg wall;
    int posx;
    int posy;
    int coinsdiali;
    int playersdiali;
    int exitdiali;

} tlong;

// typedef struct simg
// {
//     char *img;
//     int i;
//     int z;
// }            timg;

void rssam(tlong *longe);
void ch7almnline(int fd, tlong *longe);
char **checkmap(tlong *longe);
void checkwalls(tlong *longe);
void errors(int code, tlong *longe);
void drawandmove(tlong *longe);
void movementright(int pressed, tlong *longe);
void movementup(int pressed, tlong *longe);
void movementdown(int pressed, tlong *longe);
void movementleft(int pressed, tlong *longe);
void success(tlong *longe);
void movement9(int pressed, tlong *longe);
void movement7(int pressed, tlong *longe);
void movement3(int pressed, tlong *longe);
void movement1(int pressed, tlong *longe);
int pressedD(int pressed, tlong *longe);
// void pixelput(tlong *data, int x, int y, int color);

#endif