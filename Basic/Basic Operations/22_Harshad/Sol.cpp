#include <iostream>
#include <conio.h>
using namespace std;
int checkHarshad(int num)
{
    int i,sum = 0;
    for(i = num;i > 0;i /= 10)
        sum = sum + (i % 10);
    if(num % sum == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int num,var;
    cout<<"Enter the number\n";
    cin>>num;
    var = checkHarshad(num);
    if(var == 1)
        cout<<"Harshad number\n";
    else
        cout<<"Not a harshad number\n";
    getch();
    return 0;
}
