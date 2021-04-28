#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,pow,res = 1,i;
    cout<<"Enter the number\n";
    cin>>num;
    cout<<"Enter the power\n";
    cin>>pow;
    for(i = 1;i <= pow;i++)
        res = res * num;
    cout<<num<<" raised to a power of "<<pow<<" is "<<res;
    getch();
    return 0;
}
