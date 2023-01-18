#include "so_long.h"

char **checkmap(tlong *longe)
{

    char **copycat;
    int a = 0;
    // int a = 0;
    int x = 0;
    int y = 0;

    copycat = longe->kisma;

    while (copycat[a])
    {
        if (ft_strlen(copycat[a]) != longe->tol)
        {
            free(copycat);
            errors(2, longe);
        }
        a++;
    }
    if (longe->lines != a)
    {
        free(copycat);
        errors(2, longe);
    }

    while (y < longe->lines)
    {
        while (x < longe->tol)
        {
            if (copycat[y][x] == 'P' || copycat[y][x] == '1' || copycat[y][x] == '0' || copycat[y][x] == 'E' || copycat[y][x] == 'C')
            {

                if (copycat[y][x] == 'P')
                {
                    longe->playersdiali++;
                    longe->posx = x;
                    longe->posy = y;
                }
                if (copycat[y][x] == 'C')
                {

                    longe->coinsdiali++;
                }
                if (copycat[y][x] == 'E')
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
    printf("\nplayer kayn f [%d][%d]\n", longe->posx, longe->posy);
    if (longe->playersdiali != 1 || longe->exitdiali != 1 || longe->coinsdiali == 0)
    {
        printf("P = %d C = %d E = %d", longe->playersdiali, longe->coinsdiali, longe->exitdiali);
        // free(copycat);
        // free(longe->kisma);
        errors(1, longe);
    }
    //  free(copycat);
    return (copycat);
}
void checkwalls(tlong *longe)
{

    char **copycat;
    copycat = checkmap(longe);
    int x = 0;
    int y = 0;

    while (y < longe->lines)
    {
        if (copycat[y][0] != '1')
            errors(3, longe);
        if (copycat[y][longe->tol - 1] != '1')
            errors(3, longe);

        while (x < longe->tol)
        {
            if (copycat[0][x] != '1')
                errors(3, longe);

            if (copycat[longe->lines - 1][x] != '1')
                errors(3, longe);

            x++;
        }
        x = 0;
        y++;
    }
}