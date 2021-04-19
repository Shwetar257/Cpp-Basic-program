#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the number\n";
    cin>>num;
    cout<<"The factors of "<<num<<" are:\n";
    for(i = 1;i <= num;i++)
        if(num % i == 0)
            cout<<i<<" - ";
    getch();
    return 0;
}