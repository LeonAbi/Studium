#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Tile.h"
#include "Passive.h"
#include "Active.h"

using namespace std;

void Passive::setStatus(bool m_status){
    status = m_status;
}

bool Passive::getStatus(){
    return status;
}