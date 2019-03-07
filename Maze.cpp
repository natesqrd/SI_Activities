#include <iostream>
#include <string>
#include <random>
#include <ctime>
//As we start to move into functions, developing the maze will be alot easier.
//There are empty functions to allow you to mess around with some ideas.
//One thing to think about is how the rooms are going to be connected.
//Use this to mess around with finctions and develop the Maze.

using namespace std;
void pathChoose(int room);
int mainChamber();
void secretPath();
void room1();
void room2();
void room3();
void room4();
void room5();
void bigMonster();
void smallMonster();

void treasure();
void sword();
void healthPoints();
void attackPoints();

int main()
{
    string resp;
    int room, turn = 5;
    cout << "Welcome to the maze\nWould you like to enter? yes/no\n";
    cin >> resp;
    while(resp == "yes" or turn == 0)
    {
        if(resp == "yes")
        {
            room = mainChamber();
            pathChoose(room);
            turn--;
        }
        else if(resp == "no")
        {
            cout << "You've made it out this time\n";
            break;
        }
        else{
            cout << "Sorry I do not unserstand this response\n";
            cout << "Welcome to the maze\nWould you like to enter? yes/no\n";
            cin >> resp;
        }
    }
    return 0;
}
void secretPath()
{

}
void bigMonster()
{

}
void smallMonster()
{

}
void treasure()
{

}
void sword()
{

}
void healthPoints()
{

}
void attackPoints()
{
    
}
void room1()
{
    string resp;
    cout << "You walk down the hall and come across a split in the path\n";
    cout << "Turn left or right? left/right\n";
    cin >> resp;
    if(resp == "left")
        secretPath();
    else
        pathChoose(mainChamber());
}
void room2()
{
    cout << "You walk down the path\n";
    pathChoose(mainChamber());
}
void room3()
{
    
}
void room4()
{

}
void room5()
{
    string resp;
    cout << "You walk down the path and find the moster sleeping\n";
    cout << "Do you turn back or wake the monster? turn/fight\n";
    cin >> resp;
    if(resp == "turn")
    {
        cout << "The moster awakens and you are without a sword\n you died";
    }
}
int mainChamber()
{
    int room = 0; string resp = "no";
    cout << "You have entered the main chamber\n";
    cout << "Choose a path\n";
    while(resp == "no")
    {
        room++;
        if(room > 6)
            room = 1;
        cout << "Enter room " << room << "? yes/no\n";
        cin >> resp;
        if(resp != "yes" and resp != "no")
        {
            cout << "Sorry, I do not unsertand that answer\n";
            room--;
            resp = "no";
        }
    }
    return room;
}
void pathChoose(int room)
{
    switch(room)
    {
        case 1:
            room1();
            break;
        case 2:
            room2();
            break;
        case 3:
            room3();
            break;
        case 4:
            room4();
            break;
        case 5:
            room5();
            break;
        case 6:
            room1();
            break;
    }
}
