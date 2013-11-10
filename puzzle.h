#include "circuit.h"
#include "doorObject.h"
#include <vector>

#ifndef PUZZLE_H
#define PUZZLE_H

class puzzle
{
public:
	puzzle(void);
	~puzzle(void);
	void loadFromFile(void);
	bool interact(void);
	void draw(void);
private:
	std::vector<circuit> circuits;
	std::vector<doorObject> doors;
};

#endif