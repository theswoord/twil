#include "so_long.h"

void checkmap(tlong *longe)
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
            errors(2,longe);
        }
        a++;
    }
        if(longe->lines !=a){
            free(copycat);
            errors(2,longe);
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
                errors(1,longe);
        }
        x = 0;
        y++;
    }
    if (longe->playersdiali != 1 || longe->exitdiali != 1 || longe->coinsdiali == 0)
    {
        printf("P = %d C = %d E = %d", longe->playersdiali, longe->coinsdiali, longe->exitdiali);
        free(copycat);
        // free(longe->kisma);
        errors(1,longe);
    }
    //  free(copycat);
}