#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "ConsoleController.h"

using namespace std;

ConsoleController::ConsoleController() : Controller(){
    
}


ConsoleController::ConsoleController(Character* c) : Controller(c){
    
    
} 

char ConsoleController::move(){
     
    char c;
    bool exit = false;
    
    while (!exit){
     
    cin >> c;
    
    return c;
        
  /*  switch(c) {
        case 'w': return c;
        case 'a': return 'a';
        case 's': return 's';
        case 'd': return 'd';
        default : return 0;
    }    */
    }
    
}

