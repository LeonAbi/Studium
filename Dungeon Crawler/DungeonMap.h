#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Tile.h"

using namespace std;

#ifndef DUNGEONMAP_H
#define	DUNGEONMAP_H

struct Position{
    int m_height;
    int m_width;
    
    Position(){
        m_height = 1;
        m_width = 1;
    }
    Position(int height, int width){
        m_height = height;
        m_width = width;
    }
};

class DungeonMap{
    
public:
    DungeonMap();
    DungeonMap(int height, int width);
    DungeonMap(int height, int width, const vector<string>& data);
    ~DungeonMap();
    int hoehe;
    int breite;
    void place(Position pos, Character* c);
    Position findTile(Tile* t);
    Tile* findTile(Position pos);
    Position findCharacter(Character* c);
    void print();
    
    
private:
    Tile*** Spielwelt;
    
};


#endif	/* DUNGEONMAP_H */

