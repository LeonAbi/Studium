#ifndef FLOOR_H
#define	FLOOR_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Tile.h"
#include "Tile.h"
#include "Character.h"

using namespace std;

class Floor : public Tile{

public:
    void onLeave(Tile* toTile);
    void onEnter(Character* c, Tile* fromTile);
    


private:
    
    
};

#endif	/* FLOOR_H */

