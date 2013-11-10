#include "puzzle.h"

#DEFINE DOOR_OPEN 1

puzzle::puzzle(void)
{
}


puzzle::~puzzle(void)
{
}


void energyToChar(Character& player)
    for (int c = 0; c < circuits.size(); c++)
        if (player.willIntersect(circuits[c].plug))
            if (player.getPowerLevel() <= circuits[c].getEnergy())
                player.addEnergy()
        circuits[c].removeEnergy(player.getPowerLevel())
    else
        player.addEnergy(circuits[c].getEnergy())
        circuits[c].setEnergy(0)
    break
return

void energyFromChar(character)
    for (int c = 0; c < circuits.size(); c++)
        if (player.willIntersect(circuits[c].plug))
            if (player.getPowerLevel() <= player.getEnergy())
                if (player.getPowerLevel() <= circuits[c].maxAddition)
                    circuits[c].addEnergy(player.getPowerLevel())
        player.removeEnergy()
    else
        player.removeEnergy(circuits[c].maxAddition())
        circuits[c].setEnergy(circuits[c].maxEnergy())
    else
    if (player.getEnergy() <= circuits[c].maxAddition())
        circuits[c].addEnergy(player.energy())
        player.setEnergy(0)
    else
        player.removeEnergy(circuits[c].maxAddition
        circuits[c].setEnergy(circuits[c].getMaxEnergy())
    break
return

void checkPuzzle()

bool interact(character);

bool intersect(IntRect rect)
    bool test = false
    for (int c = 0; c < circuits.size(); c++)
    if (circuits[c].intersects(player))
        return true
    for (int c = 0; c < doors.size(); c++)
    if (player.willIntersect(doors[c]))
        return true

void update()
checkPuzzle()
for (int c = 0; c < circuits.size(); c++)
circuits[c].update()
for (int c = 0; c < doors.size(); c++)
if (doors[c].getState == 0 && doors[c].getFrame().x != 0)
doors[c].moveFrame(-1, 0)
doors[c].setCollides(true)
else if (doors[c].getState == 1  &&  doors[c].getFrame().x != DOOR_OPEN)
doors[c].moveFrame(1, 0)
doors[c].setCollides(false)

void draw(RenderTarget& target, RenderStates& states)
for (int c = 0; c < circuits.size(); c++)
target.draw(cicuits[c], states)
for (int c = 0; c < doors.size(); c++)
target.draw(doors[c], states)

loadPuzzle(int, int)

loadFromFile(ifstream&)
