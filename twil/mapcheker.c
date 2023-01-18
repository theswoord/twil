#include "so_long.h"

void checkmap(tlong *longe)
{

    int a = 0;
    // int a = 0;
    int x = 0;
    int y = 0;

    while (longe->kisma[a])
    {
        if (ft_strlen(longe->kisma[a]) != longe->tol)
        {
            // free(longe->kisma);
            errors(2, longe);
        }
        a++;
    }
    if (longe->lines != a)
    {
        // free(longe->kisma);
        errors(2, longe);
    }

    while (y < longe->lines)
    {
        while (x < longe->tol)
        {
            if (longe->kisma[y][x] == 'P' || longe->kisma[y][x] == '1' || longe->kisma[y][x] == '0' || longe->kisma[y][x] == 'E' || longe->kisma[y][x] == 'C')
            {

                if (longe->kisma[y][x] == 'P')
                {
                    longe->playersdiali++;
                    longe->posx = x;
                    longe->posy = y;
                }
                if (longe->kisma[y][x] == 'C')
                {

                    longe->coinsdiali++;
                }
                if (longe->kisma[y][x] == 'E')
                {
                    longe->exitdiali++;
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
    if (longe->playersdiali != 1 || longe->exitdiali != 1 || longe->coinsdiali == 0)
    {
        printf("P = %d C = %d E = %d", longe->playersdiali, longe->coinsdiali, longe->exitdiali);
        // free(copycat);
        // free(longe->kisma);
        errors(1, longe);
    }
    checkwalls(longe);
    if (path(longe) == 0){
        errors(4,longe);
    }
    //  free(copycat);
}
void checkwalls(tlong *longe)
{

    int x = 0;
    int y = 0;

    while (y < longe->lines)
    {
        if (longe->kisma[y][0] != '1')
            errors(3, longe);
        if (longe->kisma[y][longe->tol - 1] != '1')
            errors(3, longe);

        while (x < longe->tol)
        {
            if (longe->kisma[0][x] != '1')
                errors(3, longe);

            if (longe->kisma[longe->lines - 1][x] != '1')
                errors(3, longe);

            x++;
        }
        x = 0;
        y++;
    }
}

int path(tlong *longe)
{

    int x = longe->posx;
    int y = longe->posy;
    int a;
    int i;
    char **visited = malloc(longe->lines * sizeof(char *));
    while (i < longe->lines)
    {
        visited[i] = malloc(longe->tol * sizeof(char));
        i++;
    }

    a = safe(x, y, longe, visited);
    printf("pos nmla [%d] [%d]\n", longe->posx, longe->posy);

    free(visited);
    return (a);
}

int safe(int x, int y, tlong *longe, char **visited)
{
    if ((longe->kisma[y][x] == '0' || longe->kisma[y][x] == 'C' || longe->kisma[y][x] == 'P' || longe->kisma[y][x] == 'E') && visited[y][x] != 'D')
    {
        visited[y][x] = 'D';
        if (longe->kisma[y][x] == 'E' || longe->kisma[y][x] == 'C')
        {
            longe->c++;
            if (longe->c == longe->coinsdiali + 1)
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