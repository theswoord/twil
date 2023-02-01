#include <mlx.h>
#include<unistd.h>
void display_images(void *mlx, void *win, char *img0[4], void *img, void *img2) {
    int i = 0;
    int x = 500;
    int y = 500;

    while (i <= 3) {
        mlx_put_image_to_window(mlx, win, img0[i], x, y);
        i++;
        if (i == 3) {
            i = 0;
        }
    }
}

int main()
{
    void *mlx;
    void *win;
    char *img[4];
    void* imgp;
    int i = 0;
    int x = 500;
    int y = 500;
    int img_width;
    int img_height;

    mlx = mlx_init();
    win = mlx_new_window(mlx, 1650, 1050, "Animation");

    img[0] = mlx_xpm_file_to_image(mlx, "./textures/runelight0.xpm", &img_width, &img_height);
    img[1] = mlx_xpm_file_to_image(mlx, "./textures/runelight1.xpm", &img_width, &img_height);
    img[2] = mlx_xpm_file_to_image(mlx, "./textures/runelight2.xpm", &img_width, &img_height);
    img[3] = mlx_xpm_file_to_image(mlx, "./textures/runelight3.xpm", &img_width, &img_height);
    imgp = mlx_xpm_file_to_image(mlx, "./textures/player.xpm", &img_width, &img_height);
    while (1)
    {
        mlx_clear_window(mlx, win);
        mlx_put_image_to_window(mlx, win, img[i], x, y);
        i++;
        if (i == 4)
        {
            i = 0;
        }
        usleep(100000);
        mlx_do_sync(mlx);
    }
    mlx_loop(mlx);
    return 0;
}
