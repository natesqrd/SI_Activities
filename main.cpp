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
