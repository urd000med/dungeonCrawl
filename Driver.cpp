#include <iostream>
#include <vector>
#include <time.h>
#include "obj.h"

#include "Monster.cpp"
#include "Character.cpp"
#include "Map.cpp"
#include "Item.cpp"

//#include "Item.cpp"
//#include "Character.cpp"
//#include "Monster.cpp"
//#include "map.cpp"

using namespace std;
// this is the file that will "run" the game, basically setting variables, and then running the game loop

Character player;



int main(){
int choice;
//seed the random number generator 
srand(time(NULL));
int difficulty;
string cname;
cout << "enter an int for difficulty... 1-10 suggested but put whatever you want, go wild" << endl;
cin >> difficulty;
cout << "enter a name for your character. or enter 1 and I give your character a dumb sounding name " << endl;
cin >> cname;
Map level = Map(difficulty*10);
// get the users windows account name, and set the character name to that
// generate a Character
// should there be prebuilt characters?

//vector<vector<int>> map = makemap(difficulty,difficulty); // <-- difficulty increases map size ?
// make a dungeon object

// loooooooop
while (player.getHp() > 0) {
    // "clears" the screen... the lazy way
    for (int i=0;i<20;i++){
        cout <<endl;
    }
    level.printMap();
    cout << "select an option from the list" << endl;
    cin >> choice;
    // run a function to generate options < -- this is better than a static setup because you can use it for battle, or for map traversal

}
// read user input

// resolve user input ( battle handler? )


}
// is the enemy generated in here? or before?
void battle(Character p, int difficulty){
    // make a monster object
    Monster m(difficulty);
    while (p.getHp() > 0 and m.getHp() > 0) {
        // get player action

        // generate a random monster action 
    }
    // start looping to get user input to see what they did
}
