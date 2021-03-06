#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "Tile.h"
#include "GameEngine.h"

using namespace std;

void loadFromFile(string filename){
    vector<string> data;
    vector<string> links;
    ifstream saveGame;
    int hoehe;
    int breite;
    string line;
    saveGame.open("level1.txt");
    
    if(saveGame.good()){
        while(getline(saveGame,line)){
            //links.push_back(line);
            cout << line << "\n";
        
        
       /* for(int i = 0; i < hoehe; i++){
            getline(saveGame, line);
                data.push_back(line);
        }*/
        
        }
        saveGame.close();  
    }
    
    else{
        cerr << "Fehler beim oeffnen der Datei!";
    } 
}




int main() {
    vector<string> specialTiles{"Character @ 5 5 ConsoleController 6 6",
            "Character % 5 5 StationaryController 3 4",
            "Door 6 2 Switch 2 4",
            "Greatsword 1 4",
            "Trap 4 2"};
    
    vector<string> info{"6 2 D 2 4 S"};
    
    vector<string> data{ 
        "####################", 
        "####...L...........#", 
        "###.S..............#", 
        "##.........####....#", 
        "#T............#....#", 
        "#..........####....#", 
        "#.D................#", 
        "#..................#", 
        "#..................#", 
        "####.###...####.####",
        "###.#####..#########",
        "###.######.#########",
        "##########.#########",
        "##########.#########",
        "#########...########",
        "########.....########",
        "######.........######",
        "####################",
        "####################",
        "####################",}; 
       
       loadFromFile("level1.txt");
        
       GameEngine ge(20,20,data, specialTiles);
       
       ge.run();
    
    
    return 0;
}
