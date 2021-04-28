#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number\n";
    cin>>a;
    cout<<"Enter the second number\n";
    cin>>b;
    cout<<"Enter the third number\n";
    cin>>c;
    if(a > b){
        if(a > c)
            cout<<"The greatest number is "<<a;
        else if(c > a)
            cout<<"The greatest number is "<<c;
        else
            cout<<a<<" and "<<c<<" are equal";
    }
    else if(b > a){
        if(b > c)
            cout<<"The greatest number is "<<b;
        else if(c > b)
            cout<<"The greatest number is "<<c;
        else
            cout<<b<<" and "<<c<<" are equal";
    }
    else{
        if(a > c)
            cout<<"Both "<<a<<" and "<<b<<" are equal";
        else if(c > a)
            cout<<"The greatest number is "<<c;
        else
            cout<<"All the three numbers are equal";
    }
    getch();
    return 0;
}
