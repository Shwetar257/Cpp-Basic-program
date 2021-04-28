#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number of people\n";
    cin>>num;
    cout<<"The number of handshakes are "<<num * (num - 1) / 2;
    getch();
    return 0;
}