#include "so_long.h"

void ch7almnline(int fd, t_long *longe)
{
    int a;
    a = 0;
    char *temp = malloc(100);
    char *stertwil = malloc(100);
    //   char **map = malloc(1000);
    temp = get_next_line(fd);
    // printf("%s", temp);
    // longe->map.lines = 0;
    longe->map.tol = ft_strlen(temp) - 1;
    printf("\n haaa %d ", longe->map.tol);

    while (temp)
    {

        // printf("%s", temp);
        stertwil = ft_strjoingnl(stertwil, temp);

        temp = get_next_line(fd);
        longe->map.lines++;
        // if(!temp){
        //     break;
        // }
        // printf("%s",temp);
        // free(temp);
        // printf("%s",stertwil);
        // a++;
    }

    // while (1)
    // {
    // }
    longe->map.kisma = ft_split(stertwil, '\n');
    // printf("\n[[%s]]",longe->map.kisma[4]);
    // free(temp);
    free(stertwil);
        printf("\n haaa %d ", longe->map.tol);

    // while (longe->map.kisma[a])
    // {
    //     printf("%s\n",longe->map.kisma[a]);
    //     a++;
    // }

    // printf("map.lines:%d\n", longe->map.lines);
    // printf("map.tol :%d\n", longe->map.tol);
    // printf("%s",longe->map.kisma[6]);
}
void freeingmachine(char **visited, void *p, t_long *longe)
{
    int a = 0;
    int i = 0;
    while (visited[a])
    {
        free(visited[a]);
        a++;
    }
    free(visited);
    // if (p[a])
    // {
    //     free(p[a]);
    //     a++;
    // }
    // if (longe->map.kisma[i])
    // {
    //    free(longe->map.kisma[i]);
    //    i++;
    // }
}
void success(t_long *longe)
{
    write(1, "good job you won. wow!", 22);
    free(longe->map.kisma);
    exit(0);
}
void errors(int code, t_long *longe)
{

    if (code == 1)
    {
        write(1, "3ndk mochkil f map check input", 30);
        // free(longe->map.kisma);
        freeingmachine(longe->map.kisma, NULL, NULL);
        exit(0);
    }
    if (code == 2)
    {
        write(1, "3ndk mochkil f map check map.tol o l3rd", 35);
        // free(longe->map.kisma);
        freeingmachine(longe->map.kisma, NULL, NULL);
        exit(0);
    }
    if (code == 3)
    {
        write(1, "3ndk mochkil f map check walls o mo7it", 38);
        // free(longe->map.kisma);
        freeingmachine(longe->map.kisma, NULL, NULL);
        // while (1)
        // {
        // }
        exit(0);
    }
    if (code == 4)
    {
        write(1, "not a valid map , there is no valid path", 40);
        // free(longe->map.kisma);
        freeingmachine(longe->map.kisma, NULL, NULL);
        exit(0);
    }
}
int main(int argc, char **av)
{
    int fd;
    // int a;
    t_long *longe = (t_long *)malloc(sizeof(t_long));
    ft_memset(longe, 0, sizeof(t_long));

    if (argc == 2)
    {
        fd = open(av[1], O_RDONLY);
        printf("9bl line %d",longe->map.tol);
        ch7almnline(fd, longe);
        // printf("\nalo%d",longe->game.coinsdiali);
        // printf("\nles x[%d] les y[%d] coins[%d] player [%d], exit[%d],prize [%d] ,pas [%d] \n ", longe->game.posx, longe->game.posy, longe->game.coinsdiali, longe->game.playersdiali, longe->game.exitdiali, longe->game.prize, longe->game.pas);
        // printf("haahhahah%d ", longe->map.lines);
        // printf("%d", longe->map.lines);
        // longe.game.coinsdiali = 0;
        // longe.game.exitdiali = 0;
        // longe .game.playersdiali= 0;
        // checkmap(longe);

        // while(1){

        // }
        // while (longe.map.kisma[a]){
        // printf("%s\n",longe.map.kisma[a]);
        // a++;
        // }
        // checkwalls(&longe);
        checkmap(longe);
        // printf("player kayn f [%d][%d]", longe.posx, longe.posy);

        rssam(longe);

        // printf("\ncoins :%d", longe.coinsdiali);
    }
}