#include "so_long.h"
int pressed(int pressed, t_long *longe)
{
    if (pressed == NUMUP || pressed == W || pressed == UP) // lfog
    {
       movementup(pressed,longe);
    }
    if (pressed == NUMDOWN || pressed == S || pressed == DOWN) // lt7t
    {
        
      movementdown(pressed,longe);
    }
    if (pressed == NUMLEFT || pressed == A || pressed == LEFT) // lisr
    {
        movementleft(pressed,longe);
    }

    if (pressed == NUMRIGHT || pressed == D || pressed == RIGHT) // limn
    {
        movementright(pressed,longe);
    }
    if (pressed == ESC)
        exit(0);
    if (pressed == DIAG9 || pressed == DIAG7 ||pressed == DIAG3 ||pressed == DIAG1)
        pressedD(pressed,longe);
    return 1;
}
int pressedD(int pressed, t_long *longe){
    if (pressed == DIAG9 ) // 9
    {
       movement9(pressed,longe);
    }
    if (pressed == DIAG7 ) // 7
    {
       movement7(pressed,longe);
    }
    if (pressed == DIAG3 ) // 3
    {
       movement3(pressed,longe);
    }
    if (pressed == DIAG1 ) // 1
    {
       movement1(pressed,longe);
    }
    return(1);
}
void drawandmove(t_long *longe)
{
    int i = 0;
    int j = 0;
    // mlx_clear_window(longe->init.mlx,longe->init.win);
    // mlx_destroy_image(longe->init.mlx, )
    while (j < longe->map.lines)
    {
        while (i < longe->map.tol)
        {

            if (longe->map.kisma[j][i] == '1')
            {
                mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img1, i * 32, j * 32);
            }
            if (longe->map.kisma[j][i] == '0' || longe->map.kisma[j][i] == 'P' || longe->map.kisma[j][i] == 'E' || longe->map.kisma[j][i] == 'C')
            {
                mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, i * 32, j * 32);
            }
            if (longe->map.kisma[j][i] == 'P')
            {
                mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.imgP, i * 32, j * 32);
            }
            if (longe->map.kisma[j][i] == 'C')
            {
                mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.imgC, i * 32, j * 32);
                // longe->coinsdiali++;
            }
            if (longe->map.kisma[j][i] == 'E')
            {
                mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.imgE, i * 32, j * 32);
            }
            i++;
        }
        i = 0;
        j++;
    }
    // printf("%d\n", longe->game.coinsdiali);

}
void rssam(t_long *longe)
{


    longe->img.coin = "./coin.XPM";
    longe->img.player = "./player.XPM";
    longe->img.wall = "./wall.XPM";
    longe->img.floor = "./floor.XPM";
    longe->img.exit = "./portal.XPM";

    
    longe->init.mlx = mlx_init();
    longe->img.img1 = mlx_xpm_file_to_image(longe->init.mlx, longe->img.wall, &longe->img.img_width, &longe->img.img_height);
    longe->img.img0 = mlx_xpm_file_to_image(longe->init.mlx, longe->img.floor, &longe->img.img_width, &longe->img.img_height);
    longe->img.imgP = mlx_xpm_file_to_image(longe->init.mlx, longe->img.player, &longe->img.img_width, &longe->img.img_height);
    longe->img.imgE = mlx_xpm_file_to_image(longe->init.mlx, longe->img.exit, &longe->img.img_width, &longe->img.img_height);
    longe->img.imgC = mlx_xpm_file_to_image(longe->init.mlx, longe->img.coin, &longe->img.img_width, &longe->img.img_height);
    longe->init.win = mlx_new_window(longe->init.mlx, (longe->map.tol * 32), (longe->map.lines * 32), "ft_crawl");

    drawandmove(longe);
    mlx_key_hook(longe->init.win, pressed, longe);
    mlx_loop(longe->init.mlx);
}
