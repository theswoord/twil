#include "so_long.h"
int	pressed(int pressed, t_long *longe)
{
	if (pressed == NUMUP || pressed == W || pressed == UP) // lfog
	{
		movementup(pressed, longe);
	}
	if (pressed == NUMDOWN || pressed == S || pressed == DOWN) // lt7t
	{
		movementdown(pressed, longe);
	}
	if (pressed == NUMLEFT || pressed == A || pressed == LEFT) // lisr
	{
		movementleft(pressed, longe);
	}
	if (pressed == NUMRIGHT || pressed == D || pressed == RIGHT) // limn
	{
		movementright(pressed, longe);
	}
	if (pressed == ESC)
		exit(0);
	if (pressed == DIAG9 || pressed == DIAG7 || pressed == DIAG3
		|| pressed == DIAG1)
		pressedD(pressed, longe);
	return (1);
}


int	pressedD(int pressed, t_long *longe)
{
	if (pressed == DIAG9) // 9
	{
		movement9(pressed, longe);
	}
	if (pressed == DIAG7) // 7
	{
		movement7(pressed, longe);
	}
	if (pressed == DIAG3) // 3
	{
		movement3(pressed, longe);
	}
	if (pressed == DIAG1) // 1
	{
		movement1(pressed, longe);
	}
	return (1);
}