#include "so_long.h"
int pressed(int pressed, tlong *longe)
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
int pressedD(int pressed, tlong *longe){
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
void drawandmove(tlong *longe)
{
    int i = 0;
    int j = 0;
    // mlx_clear_window(longe->mlx,longe->window);
    // mlx_destroy_image(longe->mlx, )
    while (j < longe->lines)
    {
        while (i < longe->tol)
        {

            if (longe->kisma[j][i] == '1')
            {
                mlx_put_image_to_window(longe->mlx, longe->window, longe->image1, i * 32, j * 32);
            }
            if (longe->kisma[j][i] == '0' || longe->kisma[j][i] == 'P' || longe->kisma[j][i] == 'E' || longe->kisma[j][i] == 'C')
            {
                mlx_put_image_to_window(longe->mlx, longe->window, longe->image0, i * 32, j * 32);
            }
            if (longe->kisma[j][i] == 'P')
            {
                mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP, i * 32, j * 32);
            }
            if (longe->kisma[j][i] == 'C')
            {
                mlx_put_image_to_window(longe->mlx, longe->window, longe->imageC, i * 32, j * 32);
                // longe->coinsdiali++;
            }
            if (longe->kisma[j][i] == 'E')
            {
                mlx_put_image_to_window(longe->mlx, longe->window, longe->imageE, i * 32, j * 32);
            }
            i++;
        }
        i = 0;
        j++;
    }
    printf("%d\n", longe->coinsdiali);
    // if(longe->coinsdiali == 0)
    //     exit(0);
}
void rssam(tlong *longe)
{

    // void *player;
    // char	*path = "./assetF.xpm";

    // int character = 0;
    longe->coin = "./coin.XPM";
    longe->player = "./player.XPM";
    longe->wall = "./wall.XPM";
    longe->floor = "./floor.XPM";
    longe->exit = "./portal.XPM";
    // int x = 0;
    // int y = 0;
    // int i = 0;
    // int j = 0;

    longe->mlx = mlx_init();
    longe->image1 = mlx_xpm_file_to_image(longe->mlx, longe->wall, &longe->img_width, &longe->img_height);
    longe->image0 = mlx_xpm_file_to_image(longe->mlx, longe->floor, &longe->img_width, &longe->img_height);
    longe->imageP = mlx_xpm_file_to_image(longe->mlx, longe->player, &longe->img_width, &longe->img_height);
    longe->imageE = mlx_xpm_file_to_image(longe->mlx, longe->exit, &longe->img_width, &longe->img_height);
    longe->imageC = mlx_xpm_file_to_image(longe->mlx, longe->coin, &longe->img_width, &longe->img_height);
    longe->window = mlx_new_window(longe->mlx, (longe->tol * 32), (longe->lines * 32), "ft_crawl");

    drawandmove(longe);
    // window = mlx_new_window(longe->mlx, 480,800, "hahowabda");

    // ft_printf("tol %d\n", longe->tol);
    // ft_printf("l3rd %d", longe->lines);
    // ft_printf("%c", longe->kisma[1][0]);
        

    // mlx_key_hook(longe->window, pressedD, longe);
    mlx_key_hook(longe->window, pressed, longe);
    mlx_loop(longe->mlx);
}
