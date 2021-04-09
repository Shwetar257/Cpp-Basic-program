#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,rev = 0,i,temp = 10;
    cout<<"Enter the number\n";
    cin>>num;
    for(i = num;i > 0;i /= 10)
        rev = (rev * temp) + (i % 10);
    cout<<"The reverse of "<<num<<" is "<<rev;
    getch();
    return 0;
}