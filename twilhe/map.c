#include "so_long.h"

void ch7almnline(int fd, t_long *longe)
{
    int a;
    a = 0;
    char *temp = malloc(100);
    char *stertwil = malloc(100);
    temp = get_next_line(fd);
   
    longe->map.tol = ft_strlen(temp) - 1;

    while (temp)
    {

        stertwil = ft_strjoingnl(stertwil, temp);

        temp = get_next_line(fd);
        longe->map.lines++;

    }


    longe->map.kisma = ft_split(stertwil, '\n');

    free(stertwil);

}
void freeingmachine(char **visited, void *p, t_long *longe)
{
    int a = 0;
    int i = 0;
    if(visited){
    while (visited[a])
    {
        free(visited[a]);
        a++;
    }
    free(visited);
    }

    if (p)
    {
        if (p == NULL)
            return;
        free(p);
    }
    return;

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
        freeingmachine(longe->map.kisma, NULL, NULL);
        exit(0);
    }
    if (code == 2)
    {
        write(1, "3ndk mochkil f map check map.tol o l3rd", 35);
        freeingmachine(longe->map.kisma, NULL, NULL);
        exit(0);
    }
    if (code == 3)
    {
        write(1, "3ndk mochkil f map check walls o mo7it", 38);
        freeingmachine(longe->map.kisma, NULL, NULL);
        exit(0);
    }
    if (code == 4)
    {
        write(1, "not a valid map , there is no valid path", 40);
        freeingmachine(longe->map.kisma, NULL, NULL);
        exit(0);
    }
}
int main(int argc, char **av)
{
    int fd;
    t_long *longe = (t_long *)malloc(sizeof(t_long));
    ft_memset(longe, 0, sizeof(t_long));

    if (argc == 2)
    {
        fd = open(av[1], O_RDONLY);
        ch7almnline(fd, longe);
        checkmap(longe);
        rssam(longe);
    }
}