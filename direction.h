#ifndef DIRECTION_H
#define DIRECTION_H

enum direction{STOP = -1, NORTH, EAST, SOUTH, WEST};
direction oppositeDirection(direction d);
direction turnLeft(direction d, int turn = 1);
direction turnRight(direction d, int turn = 1);

#endif