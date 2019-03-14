/*
What is an algorithm?
An algorithm is a set of instructions that when followed
is the solution to a problems

What are Levels of Abstraction?
 Takining a general statements or algorithm and breaking it down into more specific components

 Write a algorithm for the computer to make a PB&J
 */
#include <iostream>
#include <string>
using namespace std;


bool openContainer(bool item)
{
    if(item == false)
        return !item;
    return item;
}
int main()
{
    bool bread = false, PB = false, J = false;
    if(openContainer(bread))
    {
        cout << "Put bread on plate\n";
    }
    //Here is the start of the code, finish it
    return 0;
}
