#include "so_long.h"

void checkmap(t_long *longe)
{

    int a = 0;
    int x = 0;
    int y = 0;
    int d = 0;
 
    while (longe->map.kisma[a])
    {
        if (ft_strlen(longe->map.kisma[a]) != longe->map.tol)
        {

            errors(2, longe);
        }
        a++;
    }

    if (longe->map.lines != a)
    {
        errors(2, longe);
    }
    while (y < longe->map.lines)
    {
        while (x < longe->map.tol)
        {
            if (longe->map.kisma[y][x] == 'P' || longe->map.kisma[y][x] == '1' || longe->map.kisma[y][x] == '0' || longe->map.kisma[y][x] == 'E' || longe->map.kisma[y][x] == 'C')
            {

                if (longe->map.kisma[y][x] == 'P')
                {
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

    if (longe->game.playersdiali != 1 || longe->game.exitdiali != 1 || longe->game.coinsdiali == 0)
    {
        printf("P = %d C = %d E = %d", longe->game.playersdiali, longe->game.coinsdiali, longe->game.exitdiali);

        errors(1, longe);
    }
    checkwalls(longe);
    if (path(longe) == 0)
    {
        errors(4, longe);
    }
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
    int a =0;
    int i=0;
    char **visited = malloc(longe->map.lines * sizeof(char *));
    while (i < longe->map.lines)
    {
        visited[i] = malloc(longe->map.tol * sizeof(char));
        i++;
    }

    a = safe(x, y, longe, visited);

    // freeingmachine(visited, NULL, NULL);
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