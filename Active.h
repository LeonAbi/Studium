#ifndef ACTIVE_H
#define	ACTIVE_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "Tile.h"
#include "Passive.h"

using namespace std;

class Active : public Tile{

public: 
              
    void setPassive(Passive* m_pPointer);
    //void setStatus(bool m_status);
    bool getStatus();
    
private:
    
    Passive* pPointer; 
    bool status;
  
};
#endif	/* ACTIVE_H */

