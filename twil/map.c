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

        a++;
    }
    longe->kisma = ft_split(stertwil, '\n');
    // printf("lines:%d\n", longe->lines);
    // printf("tol :%d\n", longe->tol);
    // printf("%s",longe->kisma[6]);
}

int main(int argc, char **av)
{
    int fd;

    tlong longe;

    if (argc == 2)
    {
        fd = open(av[1], O_RDONLY);
        ch7almnline(fd, &longe);
        rssam(&longe);
        printf("\ncoins :%d", longe.coinsdiali);
    }
}