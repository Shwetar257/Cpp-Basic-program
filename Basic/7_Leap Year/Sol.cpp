#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int y;
    cout<<"Enter the year\n";
    cin>>y;
    if(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
        cout<<"Leap year\n";
    else    
        cout<<"Not a leap year\n";
    getch();
    return 0;
}
