#include "so_long.h"

void movementdown(int pressed, tlong *longe)
{
    if (longe->kisma[longe->posy + 1][longe->posx] == 'C')
    {
        longe->kisma[longe->posy + 1][longe->posx] = '0';
        longe->coinsdiali--;
    }
    if (longe->kisma[longe->posy + 1][longe->posx] != '1')
    {
        if (longe->kisma[longe->posy + 1][longe->posx] != 'E' || longe->coinsdiali == 0)
        {
            mlx_put_image_to_window(longe->mlx, longe->window, longe->image0, longe->posx * 32, longe->posy * 32);
            mlx_put_image_to_window(longe->mlx, longe->window, longe->image0, longe->posx * 32, (longe->posy + 1) * 32);
            mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP, longe->posx * 32, (longe->posy + 1) * 32);
            if (longe->kisma[longe->posy + 1][longe->posx] == 'E')
                success(longe);
            longe->posy++;
        }
    }
}
void movementup(int pressed, tlong *longe)
{
    if (longe->kisma[longe->posy - 1][longe->posx] == 'C')
    {
        longe->kisma[longe->posy - 1][longe->posx] = '0';
        longe->coinsdiali--;
    }
    if (longe->kisma[longe->posy - 1][longe->posx] != '1')
    {
        if (longe->kisma[longe->posy - 1][longe->posx] != 'E' || longe->coinsdiali == 0)
        {
            mlx_put_image_to_window(longe->mlx, longe->window, longe->image0, longe->posx * 32, longe->posy * 32);
            mlx_put_image_to_window(longe->mlx, longe->window, longe->image0, longe->posx * 32, (longe->posy - 1) * 32);
            mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP, longe->posx * 32, (longe->posy - 1) * 32);
            if (longe->kisma[longe->posy - 1][longe->posx] == 'E')
                success(longe);
            longe->posy--;
        }
    }
}
void movementleft(int pressed, tlong *longe)
{
    if (longe->kisma[longe->posy][longe->posx - 1] == 'C')
    {
        longe->kisma[longe->posy][longe->posx - 1] = '0';
        longe->coinsdiali--;
    }
    if (longe->kisma[longe->posy][longe->posx - 1] != '1')
    {
        if (longe->kisma[longe->posy][longe->posx - 1] != 'E' || longe->coinsdiali == 0)
        {
            mlx_put_image_to_window(longe->mlx, longe->window, longe->image0, longe->posx * 32, longe->posy * 32);
            mlx_put_image_to_window(longe->mlx, longe->window, longe->image0, (longe->posx - 1) * 32, longe->posy * 32);
            mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP, (longe->posx - 1) * 32, longe->posy * 32);
            if (longe->kisma[longe->posy][longe->posx - 1] == 'E')
                success(longe);
            longe->posx--;
        }
    }
}
void movementright(int pressed, tlong *longe)
{

    if (longe->kisma[longe->posy][longe->posx + 1] == 'C')
    {
        longe->kisma[longe->posy][longe->posx + 1] = '0';
        longe->coinsdiali--;
    }
    if (longe->kisma[longe->posy][longe->posx + 1] != '1')
    {
        if (longe->kisma[longe->posy][longe->posx + 1] != 'E' || longe->coinsdiali == 0)
        {
            mlx_put_image_to_window(longe->mlx, longe->window, longe->image0, longe->posx * 32, longe->posy * 32);
            mlx_put_image_to_window(longe->mlx, longe->window, longe->image0, (longe->posx + 1) * 32, longe->posy * 32);
            mlx_put_image_to_window(longe->mlx, longe->window, longe->imageP, (longe->posx + 1) * 32, longe->posy * 32);
            if (longe->kisma[longe->posy][longe->posx + 1] == 'E')
                success(longe);
            longe->posx++;
        }
    }
}