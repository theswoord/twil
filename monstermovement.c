#include "so_long.h"

void monmov(t_long *longe)
{

    // if(longe->map.kisma[longe->mon.posky][longe->mon.poskx+1] == '0'){

    // }
    if ((longe->mon.posky == longe->game.posy && longe->mon.poskx == longe->game.posx) /*longe->mon.posky-1 == longe->game.posy*/ )
    {
        exit(1);
    }
    if ((longe->mon.posty == longe->game.posy && longe->mon.postx == longe->game.posx)||(longe->mon.posty+1 == longe->game.posy && longe->mon.postx == longe->game.posx))
    {
        exit(1);
    }
    if ((longe->mon.possy == longe->game.posy && longe->mon.possx == longe->game.posx)||(longe->mon.possy+1 == longe->game.posy && longe->mon.possx == longe->game.posx))
    {
        exit(1);
    }
}