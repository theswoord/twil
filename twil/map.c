#include "so_long.h"

void ch7almnline(int fd, tlong *longe)
{
    int a;
    a = 0;
    char *temp = malloc(100);
    char *stertwil = malloc(100);
    //   char **map = malloc(1000);
    temp = get_next_line(fd);
    // printf("%s", temp);
    longe->lines = 0;
    longe->tol = ft_strlen(temp) - 1;
    while (temp)
    {

        // printf("%s", temp);
        stertwil = ft_strjoingnl(stertwil, temp);

        // free(temp);
        temp = get_next_line(fd);
        longe->lines++;
        // printf("%s",stertwil);
        // a++;
    }
    longe->kisma = ft_split(stertwil, '\n');
    free(temp);
    free(stertwil);
    // while (longe->kisma[a])
    // {
    //     printf("%s\n",longe->kisma[a]);
    //     a++;
    // }

    // printf("lines:%d\n", longe->lines);
    // printf("tol :%d\n", longe->tol);
    // printf("%s",longe->kisma[6]);
}
void success(tlong *longe){
    write(1,"good job you won. wow!",22);
    free(longe->kisma);
    exit(0);
}
void errors(int code, tlong *longe)
{

    if (code == 1)
    {
        write(1, "3ndk mochkil f map check input", 30);
        free(longe->kisma);
        exit(0);
    }
    if (code == 2)
    {
        write(1, "3ndk mochkil f map check tol o l3rd", 35);
        free(longe->kisma);
        exit(0);
    }
    if (code == 3){
        write(1, "3ndk mochkil f map check walls o mo7it", 38);
        free(longe->kisma);
        exit(0);
    }
        if (code == 4){
        write(1, "not a valid map , there is no valid path", 40);
        free(longe->kisma);
        exit(0);
    }
}
int main(int argc, char **av)
{
    int fd;
    // int a;
    tlong longe;

    if (argc == 2)
    {
        fd = open(av[1], O_RDONLY);
        ch7almnline(fd, &longe);
        checkmap(&longe);
        // while (longe.kisma[a]){
        // printf("%s\n",longe.kisma[a]);
        // a++;
        // }
        // checkwalls(&longe);
        // checkmap(&longe);
        // printf("player kayn f [%d][%d]", longe.posx, longe.posy);

        rssam(&longe);

        // printf("\ncoins :%d", longe.coinsdiali);
    }
}