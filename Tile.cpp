#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Tile.h"

Tile::Tile(TileTyp typart){
    typ = typart;
    held = nullptr;
}

Tile::TileTyp Tile::getTile() const{
    return typ;
}

Character* Tile::getCharacter() const{
    return held;
}

bool Tile::hasCharacter() const{
    if(held != nullptr){
        return true;
    }
    return false;
}

void Tile::setCharacter(Character* heldfigur){
    held = heldfigur;
}

void Tile::onLeave(Tile* toTile){ //Figur wird auf die Kachel "toTile" geschoben
    if(toTile->hasCharacter() == false && toTile->getTile() == Floor){
        toTile->onEnter(held, this);      
        held = nullptr;
    }
}   
    

void Tile::onEnter(Character* c, Tile* fromTile){ //simuliert das "Ankommen" der Figur 
    held = c;
}