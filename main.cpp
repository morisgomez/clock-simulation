#include <iostream>
#include <iomanip>
using namespace std;


int main ()
{
    for (int hours = 0; hours < 24; hours++) //hours stop right before time hits 23:59:59.
    {
        for (int minutes = 0; minutes < 60; minutes++)
        {
            for (int seconds = 0; seconds < 60; seconds++) //soon as seconds reaches 60, this loop stops and var resets to 0.
            {
                cout << setw(2) << hours << ":";
                cout << setw(2) << minutes << ":";
                cout << setw(2) << seconds << endl;
            }//ends seconds nested loop.
        }//ends minutes nested loop.
    }//ends hours nested loop.
    return 0;
}
//NOTE: nested loops' initialization resets to original after condition = false.
//NOTE: outer loop runs with nested loop in mind.
//HELP: how would i make the empty spaces zero? it looks like setw() creates the space but doesnt fill space.
