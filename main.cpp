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


#include <iostream>
#include <string>

using namespace std;

int main()
{
    //This is a demonstrantion on the use of the Switch Statement
    //First thing to know is that the Switch does NOT accept non primitive types
    //This means that string can not be used. Leaving only int, double, char, long, float and short.
    string str = "Hello";
    switch(str) //Here in xCode the error -Statement requires expression of integer type- pops up
    {
        case "Hello":
            break;
        default:
            break;
    }

    char ch = 'a';
    switch(ch)
    {
        case 'a':
            cout << "Hello\n";
            break;
        default:
            break;
    }//Since ch = 'a' the first case will execute
    //remember the layout
    /*
     switch(var)
     {
        case 1:
            do something;
            break;
        case 2:
            do something else;
            break;
     ....
        default:
            the default thing to do;
            break;
     }
     There are cases, code and break. At the end there is a default with more code and a break.
     */

    return 0;
}


<iostream>

main{
    cout "Hello World";
    cin >> name;
    string name;
    char firstLetter = name;
    if(firstLetter == c)
    {
        cout << "I like that letter " << firstLetter << endl;
    }
    else
    {
        cout << 44+=firstLetter << endl;
    }

        int = 5;
        int h = 13.4;
        int g = h * int;
}



#include <iostream>
#include <string>
#include <random>
#include <ctime>
using namespace std;
int mainChamber()
{
    string resp;
    int room = 0;
    cout << "You have entered the main chamber\n";
    cout << "Choose a path\n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Enter path " << i + 1 << "? yes/no\n";
        cin >> resp;
        if(resp == "yes")
        {
            room = i;
            break;
        }
        if(resp != "yes" and resp != "no")
        {
            cout << "Sorry I do not understand that response\nPlease continue\n";
            i--;
        }
        if(i + 1 == 5)
            i = -1;
    }
    return room;
}
int main()
{
    string resp;
    int room;
    cout << "Welcome to the maze\nWould you like to enter? yes/no\n";
    cin >> resp;
    if(resp == "yes")
    {
        room = mainChamber();
    }
    else if(resp == "no")
    {
        cout << "You've made it out this time\n";
    }
    else{
        cout << "Sorry I do not unserstand this response\n";
    }
    return 0;
}
