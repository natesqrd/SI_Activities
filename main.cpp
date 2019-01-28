#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>

using namespace std;

/*Adventure Game*/


int main() {

    string response;
    int gold = 0;
    int swordStrength = 100;
    int monsterHealth = 50;
    int gamerHealth = 25;

    cout << "\x1b[31m Your objective is to get out of the cave ALIVE!!!! \x1b[0m \n";
    cout << "DO YOU DARE ENTER? yes/no\n";
    cin >> response;
    if(response == "yes") {
        cout << "You have entered the MONSTER CAVE\n";
        cout << "Your health: " << gamerHealth << "\nGold: " << gold << "\n";
        cout << "You are walking down the hall way of the cave and enter into a large room\nwith six other paths. choose 1/2/3/4/5/6 or leave\n";
        cin >> response;
        if(response == "1")
        {
            cout << "You walk down the first path and see that there is an opening to the left\nDo you go down the path? yes/no\n";
            cin >> response;
            if(response == "yes")
            {
                cout << "As you are walking down the left path you come to another room to the right\nDo you enter it? yes/no\n";
                cin >> response;
                if(response == "yes")
                {

                }
                else if(response == "no")
                {
                    cout << "You decided not to turn into the room and continue down the path\nYou reenter the main room and see the moster waiting for you\nGame Over"; //GAME END - FAIL
                }
            }
            else if(response == "no")
            {
                cout << "You continue down the first path and reenter into the main room\nYou see the monster has found you\nGame Over\n"; //GAME END - FAIL
            }
        }
        else if(response == "2")
        {

        }
        else if(response == "3")
        {
            cout << "You walk down a winding hall and notice bones\nDo you continue? yes/no";
            if(response == "yes")
            {

            }

        }
        else if(response == "4")
        {

        }
        else if(response == "5")
        {
            cout << "You have found a sword on the ground\nyou pick it up and as you look forward you see the monster sleeping\n";
            cout << "Do you turn around or do you attack the monster? turn/attack\n";
            cin >> response;
        }
        else if(response == "6")
        {

        }
        else
        {
            cout << "You have turned back to the hall you entered from\nAs you go down it you see that the entrance is blocked\n";
            cout << "You turn around to go back to the room with many paths and see the monster\nThe thing attacks you\n";
            usleep(pow(10, 6));
            cout << "You died\nGame Over"; //GAME END - FAIL
        }
    }
    else if(response == "no") {
       cout << "\x1b[32m You are alive THIS TIME! \x1b[0m \n";
    }
    return 0;
}