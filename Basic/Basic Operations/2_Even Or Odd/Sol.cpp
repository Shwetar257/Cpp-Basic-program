#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number\n";
    cin>>num;
    if(num%2 == 0)
        cout<<"Even number\n";
    else
        cout<<"Odd number\n";
    getch();
    return 0;
}
