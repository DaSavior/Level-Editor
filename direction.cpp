#include "direction.h"

direction oppositeDirection(direction d)
{
	if (d == STOP)
		return STOP;
	int x = int(d) + 2;
	x %= 4;
	return direction(x);
}
direction turnLeft(direction d, int turn)
{
	if (d == STOP)
		return STOP;
	int x = int(d) - turn;

	while (x <= 0)
		x += 4;
	x %= 4;
	return direction(x);
}
direction turnRight(direction d, int turn)
{
	if (d == STOP)
		return STOP;
	int x = int(d) + turn;

	while (x <= 0)
		x += 4;
	x %= 4;
	return direction(x);
}