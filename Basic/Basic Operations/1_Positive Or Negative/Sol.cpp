#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num == 0)
        cout<<"The entered number is 0";
    else if(num>0)
        cout<<"The entered number is positive\n";
    else
        cout<<"The entered number is negative\n";
    getch();
    return 0;
}
