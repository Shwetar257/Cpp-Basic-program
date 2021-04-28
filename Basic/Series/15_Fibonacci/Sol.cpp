#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int f,s,t,n,i;
    cout<<"Enter the limit\n";
    cin>>n;
    if(n <= 0)
        cout<<"Wrong input\n";
    else if(n == 1)
        cout<<"The fibonacci series upto 1 number is:\n1";
    else if(n == 2)
        cout<<"The fibonacci series upto 2 numbers is:\n1 - 2";
    else{
        cout<<"The fibonacci series upto 1 number is:\n1 - 2 - ";
        for(i = 2;i < n;i++){
            t = f + s;
            cout<<t<<" - ";
            f = s;
            s = t;
        }
    }
    getch();
    return 0;
}
