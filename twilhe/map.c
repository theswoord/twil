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
        longe->map.lines++;
        freeingmachine(NULL,temp,longe);
        temp = get_next_line(fd);
    }
    printf("\n%d\n",longe->map.lines);
    longe->map.kisma = ft_split(stertwil, '\n');
    free(stertwil);

}


int main(int argc, char **av)
{
    
    int fd;
    t_long *longe = (t_long *)malloc(sizeof(t_long));
    ft_memset(longe, 0, sizeof(t_long));
    char suffix[] = ".ber";
    if (argc == 2)
    {
        fd = open(av[1], O_RDONLY);
        if(ft_strnstr(av[1],suffix,ft_strlen(av[1]))==0){
            errors2(1,longe);
        }
        if (fd == -1){
            errors2(1,longe);
        }
        ch7almnline(fd, longe);
        longe->init.wanted = "P01EC";
        checkmap(longe);
        rssam(longe);
    }
    errors2(1,longe);
}