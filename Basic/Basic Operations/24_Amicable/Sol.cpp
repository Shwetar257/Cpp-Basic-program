#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num1,num2,sum1 = 1,sum2 = 1,i;
    cout<<"Enter the two numbers\n";
    cin>>num1>>num2;
    for(i = 2;i < num1;i++)
        if(num1 % i == 0)
            sum1 += i;
    for(i = 2;i < num2;i++)
        if(num2 % i == 0)
            sum2 += i;
    if((num1 == sum2) && (num2 == sum1))
        cout<<"Amicable numbers\n";
    else
        cout<<"Not amicable numbers\n";
    getch();
    return 0;
}
