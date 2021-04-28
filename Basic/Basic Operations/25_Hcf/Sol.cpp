#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1,num2,hcf = 1,i;
    cout<<"Enter the two numbers\n";
    cin>>num1>>num2;
    for(i = 2;i <= num1 && i <= num2;i++)
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    cout<<"The hcf of "<<num1<<" and "<<num2<<" is "<<hcf;
    getch();
    return 0;
}
