#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number\n";
    cin>>a;
    cout<<"Enter the second number\n";
    cin>>b;
    if(a>b)
        cout<<"The greatest number is "<<a;
    else if(b>a)
        cout<<"The greatest number is "<<b;
    else
        cout<<"The two numbers are equal";
    getch();
    return 0;
}