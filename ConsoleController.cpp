#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "ConsoleController.h"

using namespace std;


char ConsoleController::move(){
     
    char c;
    bool exit = false;
    
    while (!exit){
     
    cin >> c;
        
    switch(c) {
        case 'w': return 'w';
        case 'a': return 'a';
        case 's': return 's';
        case 'd': return 'd';
        default : return 0;
    }    
    }
    
}

