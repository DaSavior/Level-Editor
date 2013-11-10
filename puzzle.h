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
	void loadFromFile(ifstream&);
	void energyFromChar(Character*);
	void energyToChar(Character*);
	bool interact(Character*);
	bool intersect(IntRect rect);
	void update();
	void draw(RenderTarget&, RenderStates&);
	void loadPuzzle(int, int);
private:
	std::vector<circuit> circuits;
	std::vector<doorObject> doors;
	void checkPuzzle(void);
};

#endif