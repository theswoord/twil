#include "so_long.h"

void initserp(t_long *longe)
{
    longe->anim.serpent[0] = "./textures/serpent_coc.XPM";
    longe->anim.serpent[1] = "./textures/serpent_dis.XPM";
    longe->anim.serpent[2] = "./textures/serpent_geh.XPM";
    longe->anim.serpent[3] = "./textures/serpent_tar.XPM";

    longe->anim.imgserp[0] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.serpent[0],
                                                    &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgserp[1] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.serpent[1],
                                                    &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgserp[2] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.serpent[2],
                                                    &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgserp[3] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.serpent[3],
                                                    &longe->img.img_width, &longe->img.img_height);
}
void initklown(t_long *longe)
{
    longe->anim.klown[0] = "./textures/killer_klown_blue.XPM";
    longe->anim.klown[1] = "./textures/killer_klown_green.XPM";
    longe->anim.klown[2] = "./textures/killer_klown_purple.XPM";
    longe->anim.klown[3] = "./textures/killer_klown_red.XPM";
    longe->anim.klown[4] = "./textures/killer_klown_yellow.XPM";
    longe->anim.imgklown[0] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.klown[0],
                                                    &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgklown[1] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.klown[1],
                                                    &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgklown[2] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.klown[2],
                                                    &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgklown[3] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.klown[3],
                                                    &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgklown[4] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.klown[4],
                                                    &longe->img.img_width, &longe->img.img_height);
}

void animation_makhleb(t_long *longe)
{
    longe->anim.makhleb[0] = "./textures/makhleb1.XPM";
    longe->anim.makhleb[1] = "./textures/makhleb2.XPM";
    longe->anim.makhleb[2] = "./textures/makhleb3.XPM";
    longe->anim.makhleb[3] = "./textures/makhleb4.XPM";
    longe->anim.makhleb[4] = "./textures/makhleb5.XPM";
    longe->anim.makhleb[5] = "./textures/makhleb6.XPM";
    longe->anim.makhleb[6] = "./textures/makhleb7.XPM";
    longe->anim.makhleb[7] = "./textures/makhleb8.XPM";
    longe->anim.imgmakhleb[0] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.makhleb[0],
                                                      &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgmakhleb[1] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.makhleb[1],
                                                      &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgmakhleb[2] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.makhleb[2],
                                                      &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgmakhleb[3] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.makhleb[3],
                                                      &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgmakhleb[4] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.makhleb[4],
                                                      &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgmakhleb[5] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.makhleb[5],
                                                      &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgmakhleb[6] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.makhleb[6],
                                                      &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgmakhleb[7] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.makhleb[7],
                                                      &longe->img.img_width, &longe->img.img_height);
}
void inittiamat(t_long *longe)
{
    longe->anim.tiamat[0] = "./textures/tiamat_black.XPM";
    longe->anim.tiamat[1] = "./textures/tiamat_green.XPM";
    longe->anim.tiamat[2] = "./textures/tiamat_purple.XPM";
    longe->anim.tiamat[3] = "./textures/tiamat_red.XPM";
    longe->anim.tiamat[4] = "./textures/tiamat_yellow.XPM";
    longe->anim.tiamat[5] = "./textures/tiamat_white.XPM";

    longe->anim.imgtiam[0] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.tiamat[0],
                                                   &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgtiam[1] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.tiamat[1],
                                                   &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgtiam[2] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.tiamat[2],
                                                   &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgtiam[3] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.tiamat[3],
                                                   &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgtiam[4] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.tiamat[4],
                                                   &longe->img.img_width, &longe->img.img_height);
    longe->anim.imgtiam[5] = mlx_xpm_file_to_image(longe->init.mlx, longe->anim.tiamat[5],
                                                   &longe->img.img_width, &longe->img.img_height);
}
int animateit(t_long *longe)
{
    static int a;

    a++;
    // printf("hah%da\n",a);
    if (a == 0)
    {
        mlx_destroy_image(longe->init.mlx, longe->anim.imgmakhleb[7]);
        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgfloor[0], longe->map.i * 32, longe->map.j * 32);
    }
    if (a == 600)
    {
        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgfloor[1], longe->map.i * 32, longe->map.j * 32);
    }
    if (a == 1200)
    {
        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgfloor[2], longe->map.i * 32, longe->map.j * 32);
    }
    if (a == 1800)
    {
        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgfloor[3], longe->map.i * 32, longe->map.j * 32);
        a = 0;
    }
    usleep(100);
    // mlx_do_sync(longe->init.mlx);
    return 0;
}
int animateitmakhleb(t_long *longe)
{
    static int b;

    b++;
    monmov(longe);
    // printf("%d\n",b);
    if (b == 1)
    {
        draws(longe);
        drawt(longe);
        drawk(longe);
        //  mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posx * 32, longe->game.posy * 32);
        //  mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[rnd()], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posex * 32, longe->game.posey * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgmakhleb[rand() % 7], longe->game.posex * 32, longe->game.posey * 32);
    }
    if (b == 600)
    {
        draws(longe);
        // drawt(longe);
        drawk(longe);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posx * 32, longe->game.posy * 32);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[rnd()], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posex * 32, longe->game.posey * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgmakhleb[rand() % 7], longe->game.posex * 32, longe->game.posey * 32);
    }
    if (b == 1200)
    {
        draws(longe);
        // drawt(longe);
        drawk(longe);

        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posx * 32, longe->game.posy * 32);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[rnd()], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posex * 32, longe->game.posey * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgmakhleb[rand() % 7], longe->game.posex * 32, longe->game.posey * 32);
    }
    if (b == 1800)
    {
        draws(longe);
        // drawt(longe);
        drawk(longe);

        //         mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posx * 32, longe->game.posy * 32);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[rnd()], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posex * 32, longe->game.posey * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgmakhleb[rand() % 7], longe->game.posex * 32, longe->game.posey * 32);
    }
    if (b == 2400)
    {
        draws(longe);
        // drawt(longe);
        drawk(longe);

        //         mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posx * 32, longe->game.posy * 32);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[rnd()], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posex * 32, longe->game.posey * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgmakhleb[rand() % 7], longe->game.posex * 32, longe->game.posey * 32);
    }
    if (b == 3000)
    {
        draws(longe);
        // drawt(longe);
        drawk(longe);

        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posx * 32, longe->game.posy * 32);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[rnd()], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posex * 32, longe->game.posey * 32);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[1], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgmakhleb[rand() % 7], longe->game.posex * 32, longe->game.posey * 32);
    }
    if (b == 3600)
    {
        draws(longe);
        // drawt(longe);
        drawk(longe);

        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posx * 32, longe->game.posy * 32);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[rnd()], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posex * 32, longe->game.posey * 32);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[2], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgmakhleb[rand() % 7], longe->game.posex * 32, longe->game.posey * 32);
    }
    if (b == 4200)
    {
        draws(longe);
        // drawt(longe);
        drawk(longe);

        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posx * 32, longe->game.posy * 32);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[rnd()], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->game.posex * 32, longe->game.posey * 32);
        // mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[3], longe->game.posx * 32, longe->game.posy * 32);

        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgmakhleb[rand() % 7], longe->game.posex * 32, longe->game.posey * 32);
        b = 0;
    }
    usleep(100);
    // mlx_do_sync(longe->init.mlx);
    return 0;
}
int rnd()
{

    // int i;
    // srand(unsigned);

    return (rand() % 5);
}
void drawk(t_long *longe)
{
    mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->mon.poskx * 32, longe->mon.posky * 32);
    mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgklown[rand() % 5], longe->mon.poskx * 32, longe->mon.posky * 32);
}
void drawt(t_long *longe)
{
    mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->mon.postx * 32, longe->mon.posty * 32);
    mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgtiam[rand() % 6], longe->mon.postx * 32, longe->mon.posty * 32);
}
void draws(t_long *longe)
{
        mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->mon.possx * 32, longe->mon.possx * 32);
    mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->img.img0, longe->mon.possx * 32, longe->mon.possy * 32);
    mlx_put_image_to_window(longe->init.mlx, longe->init.win, longe->anim.imgserp[rand() % 4], longe->mon.possx * 32, longe->mon.possy * 32);
}