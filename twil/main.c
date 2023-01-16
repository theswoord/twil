#include "so_long.h"

void rssam(tlong *longe)
{

    void *mlx;
    void *window;
    void *img;
    // void *player;
    // char	*path = "./assetF.xpm";
    int img_width;
    int img_height;
    int character = 0;
    longe->coin = "./coin.XPM";
    longe->player = "./player.XPM";
    longe->wall = "./wall.XPM";
    longe->floor = "./floor.XPM";
    longe->exit = "./portal.XPM";
    int x = 0;
    int y = 0;
    int i = 0;
    int j = 0;

    mlx = mlx_init();
    window = mlx_new_window(mlx, (longe->tol * 32), (longe->lines * 32), "hahowabda");
    // window = mlx_new_window(mlx, 480,800, "hahowabda");

    ft_printf("tol %d\n", longe->tol);
    ft_printf("l3rd %d", longe->lines);
    // ft_printf("%c", longe->kisma[1][0]);
    while (j < longe->lines)
    {
        while (i < longe->tol)
        {

            if (longe->kisma[j][i] == '1')
            {
                mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, longe->wall, &img_width, &img_height), i * 32, j * 32);
            }
            if (longe->kisma[j][i] == '0' || longe->kisma[j][i] == 'P' || longe->kisma[j][i] == 'E' || longe->kisma[j][i] == 'C')
            {
                mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, longe->floor, &img_width, &img_height), i * 32, j * 32);
            }
            if (longe->kisma[j][i] == 'P')
            {
                mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, longe->player, &img_width, &img_height), i * 32, j * 32);
            }
            if (longe->kisma[j][i] == 'C')
            {
                mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, longe->coin, &img_width, &img_height), i * 32, j * 32);
                longe->coinsdiali++;
            }
            if (longe->kisma[j][i] == 'E')
            {
                mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, longe->exit, &img_width, &img_height), i * 32, j * 32);
            }
            i++;
        }
        i = 0;
        j++;
    }
    printf("\ncoins :%d", longe->coinsdiali);
    // img.img = mlx_new_image(mlx, 800, 600);
    // img.adress = mlx_get_data_addr(img.img, &img.bits, &img.linelenght, &img.end);

    // img = mlx_xpm_file_to_image(mlx, assets.coin, &img_width, &img_height);
    // player = mlx_xpm_file_to_image(mlx,assets.coin,&img_width,&img_height);

    // mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, assets.wall, &img_width, &img_height), 150, 250);
    // mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, assets.floor, &img_width, &img_height), 118, 300);
    // mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, assets.floor, &img_width, &img_height), 182, 300);
    // mlx_put_image_to_window(mlx, window, img, 182, 300);
    // mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, assets.floor, &img_width, &img_height), 150, 268);
    // mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, assets.floor, &img_width, &img_height), 150, 332);
    // mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, assets.floor, &img_width, &img_height), 150, 300);

    // mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, assets.player, &img_width, &img_height), 150, 300);
    // mlx_put_image_to_window(mlx, window, mlx_xpm_file_to_image(mlx, assets.exit, &img_width, &img_height), 150, 350);
    mlx_loop(mlx);
}