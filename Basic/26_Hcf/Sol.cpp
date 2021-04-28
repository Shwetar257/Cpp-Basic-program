#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1,num2,i,lcm;
    cout<<"Enter the two numbers\n";
    cin>>num1>>num2;
    if(num1 > num2)
        i = num1;
    else
        i = num2;
    for(i;;i++)
        if(i % num1 == 0 && i % num2 == 0){
            lcm = i;
            break;
        }
    cout<<"The lcm of "<<num1<<" and "<<num2<<" is "<<lcm;
    getch();
    return 0;
}
