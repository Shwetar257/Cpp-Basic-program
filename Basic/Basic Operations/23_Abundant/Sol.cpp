#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,sum = 1,i;
    cout<<"Enter the number\n";
    cin>>num;
    for(i = 2;i < num;i++)
        if(num % i == 0)
            sum += i;
    if(sum > num)
        cout<<"Abundant number\n";
    else
        cout<<"Not an abundant number\n";
    getch();
    return 0;
}
