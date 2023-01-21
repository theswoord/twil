#include "so_long.h"

void checkmap(t_long *longe)
{

    int a = 0;
    // int a = 0;
    int x = 0;
    int y = 0;
    int d = 0;
    // longe->game.exitdiali = 0;

    // printf("kisma %s",longe->map.kisma[a]);
    // printf("\nhahowa1");
    // printf("\n%d",ft_strlen(longe->map.kisma[5]));
    // printf("\nzaba %d",longe->map.tol);
    // while(longe->map.kisma[d]){
    //     printf("\n%s",longe->map.kisma[d]);
    //     d++;
    // }
    // printf("\nzaba%zu",strlen(longe->map.kisma[0]));
    // printf("%s\n", longe->map.kisma[5]);
    while (longe->map.kisma[a])
    {
        if (ft_strlen(longe->map.kisma[a]) != longe->map.tol)
        {
        // printf("\n%s\n",longe->map.kisma[a]);
            // printf("\nhahowa1");

            // free(longe->kisma);
            errors(2, longe);
        }
        a++;
    }
    // printf("\nhahowa");
        // printf("\n{%d}\n",a);

    // printf("\n%d\n",longe->map.lines);
    if (longe->map.lines != a)
    {
        // free(longe->kisma);
        printf("\n39ba dazt\n");
        errors(2, longe);
    }
    printf("\n hahowa daz\n");
    while (y < longe->map.lines)
    {
        while (x < longe->map.tol)
        {
            // printf("\nhqhq\n");
            if (longe->map.kisma[y][x] == 'P' || longe->map.kisma[y][x] == '1' || longe->map.kisma[y][x] == '0' || longe->map.kisma[y][x] == 'E' || longe->map.kisma[y][x] == 'C')
            {

                if (longe->map.kisma[y][x] == 'P')
                {
                    printf("\n{%d}\n", x);
                    longe->game.playersdiali++;
                    longe->game.posx = x;
                    longe->game.posy = y;
                }
                if (longe->map.kisma[y][x] == 'C')
                {

                    longe->game.coinsdiali++;
                }
                if (longe->map.kisma[y][x] == 'E')
                {
                    longe->game.exitdiali++;
                }
                x++;
            }
            else
                errors(1, longe);
        }
        x = 0;
        y++;
    }

    // printf("\nplayer kayn f [%d][%d]\n", longe->posx, longe->posy);
    if (longe->game.playersdiali != 1 || longe->game.exitdiali != 1 || longe->game.coinsdiali == 0)
    {
        printf("P = %d C = %d E = %d", longe->game.playersdiali, longe->game.coinsdiali, longe->game.exitdiali);
        // free(copycat);
        // free(longe->kisma);
        errors(1, longe);
    }
    checkwalls(longe);
    if (path(longe) == 0)
    {
        errors(4, longe);
    }
    //  free(copycat);
}
void checkwalls(t_long *longe)
{

    int x = 0;
    int y = 0;

    while (y < longe->map.lines)
    {
        if (longe->map.kisma[y][0] != '1')
            errors(3, longe);
        if (longe->map.kisma[y][longe->map.tol - 1] != '1')
            errors(3, longe);

        while (x < longe->map.tol)
        {
            if (longe->map.kisma[0][x] != '1')
                errors(3, longe);

            if (longe->map.kisma[longe->map.lines - 1][x] != '1')
                errors(3, longe);

            x++;
        }
        x = 0;
        y++;
    }
}

int path(t_long *longe)
{

    int x = longe->game.posx;
    int y = longe->game.posy;
    int a;
    int i=0;
    char **visited = malloc(longe->map.lines * sizeof(char *));
    while (i < longe->map.lines)
    {
        visited[i] = malloc(longe->map.tol * sizeof(char));
        i++;
    }
                            printf("\n{hhhhhhhh}\n");

    a = safe(x, y, longe, visited);
    printf("pos nmla [%d] [%d]\n", longe->game.posx, longe->game.posy);

    // free(visited);
    freeingmachine(visited, NULL, NULL);
    return (a);
}

int safe(int x, int y, t_long *longe, char **visited)
{
    if ((longe->map.kisma[y][x] == '0' || longe->map.kisma[y][x] == 'C' || longe->map.kisma[y][x] == 'P' || longe->map.kisma[y][x] == 'E') && visited[y][x] != 'D')
    {
        visited[y][x] = 'D';
        if (longe->map.kisma[y][x] == 'E' || longe->map.kisma[y][x] == 'C')
        {
            longe->game.prize++;
            if (longe->game.prize == longe->game.coinsdiali + 1)
                return 1;
        }
        if (safe(x, y - 1, longe, visited) == 1)
            return 1;
        if (safe(x, y + 1, longe, visited) == 1)
            return 1;
        if (safe(x - 1, y, longe, visited) == 1)
            return 1;
        if (safe(x + 1, y, longe, visited) == 1)
            return 1;
    }
    return 0;
}