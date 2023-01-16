#include "so_long.h"
// void ch7almnline(int fd, tlong *longe)
// {
//     int a;
//     a = 0;
//     char **temp;
//     temp = malloc(100000);
//     temp[a] = get_next_line(fd);

//     while (temp[a])
//     {
//         a++;
//         temp[a] = get_next_line(fd);
//     }
//     longe->lines = a;
//     free(temp);
// }
void ch7almnline(int fd, tlong *longe)
{
    int a;
    a = 0;
    char *temp;
    char *stertwil ;
    //   char **map = malloc(1000);
    temp = get_next_line(fd);
    longe->lines = 0;
    longe->tol = ft_strlen(temp)-1;
    while (temp)
    {
        // printf("%s", temp);

        free(temp);
        temp = get_next_line(fd);
        longe->lines++;

        stertwil = ft_strjoingnl(stertwil, temp);
        a++;
        // // ft_printf("%s", temp);
        // if (!temp)
        // {
        //     break;
        // }
    }
    longe->kisma = ft_split(stertwil, '\n');
    // free(stertwil);
    printf("lines:%d\n", longe->lines);
    printf("tol :%d\n", longe->tol);
    // map = longe->kisma;
    // printf(":%s:",map[0]);
    // printf("%s", map[0]);

    // printf("\n%d\n", longe->lines);

    // longe->lines = a;
    //  free(temp);
}
// void filler(int fd, int fd2, tlong *longe)
// {
//     char **pointers;
//     int a;
//     a = 0;

//     ch7almnline(fd2, longe);
//     // pointers = (char **)malloc(longe->lines * sizeof(char *));
//     pointers[a] = get_next_line(fd);
//     while (pointers[a])
//     {
//         a++;
//         pointers[a] = get_next_line(fd);
//     }
//     longe->tol = ft_strlen(pointers[0]) - 1;
//     longe->kisma = pointers;
// }
// void filler(int fd, int fd2, tlong *longe)
// {

//     int a;
//     a = 0;

//     ch7almnline(fd2, longe);
//     char *hehe = malloc(150);

//     hehe = get_next_line(fd);
//     longe->tol = ft_strlen(hehe);
//     char *joiner = malloc(longe->lines * longe->tol);
//     while (1)
//     {
//         joiner = ft_strjoingnl(joiner, get_next_line(fd));
//         if (!joiner)
//             break;
//     }

//     printf("%s", joiner);
//     longe->kisma = ft_split(joiner, '\n');
//     while (longe->kisma[a])
//     {
//         a++;
//     }
// }
// void mapfixer(tlong *longe)
// {
//     int i = 0;
//     int j = 0;
//     while (longe->kisma[j][i])
//     {
//         while (longe->kisma[j][i])
//         {
//             if (longe->kisma[j][i] == '\n')
//             {
//                 longe->kisma[j][i] = '\0';
//             }
//            i++;
//         }
//         // i = 0;
//         j++;
//     }
// }
int main(int argc, char **av)
{
    int fd;
    // int fd2;
    // char *temp;
    // char *splited = malloc(1);
    tlong longe;
    // int i = 0;
    // int horof = 0;
    // int lines;
    if (argc == 2)
    {
        fd = open(av[1], O_RDONLY);
        // fd2 = open(av[1], O_RDONLY);
        ch7almnline(fd, &longe);
        // mapfixer(&longe);
        // rssam(&longe);
        // longe.kisma = filler(fd);
        // printf("%s", pointers[0]);

        // printf("%d",lines);
        // while (1)
        // {

        //     temp = get_next_line(fd);

        //     if (!temp)
        //     {
        //         break;
        //     }
        // ft_printf("%s", longe.kisma[1]);
        // splited = ft_strjoingnl(splited, temp);
        // printf("%s",splited);
        // }

        // longe.kisma = ft_split(splited, '\n');
        // free(splited);
        // while (i <= lines)
        // {
        //     horof = ft_strlen(longe.kisma[i]);
        //     ft_printf("%s\n",longe.kisma[i]);
        //     rssam(longe.kisma[i], &lines, &horof);
        //     i++;
        // }

        // while (longe.kisma[i])
        // {
        //     horof = ft_strlen(longe.kisma[i]);
        //     // ft_printf("%s\n", longe.kisma[i]);
        // }

        // ft_printf("%s\n", splited);
    }
}