#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,i,j,sum = 0;
    cout<<"Enter the number\n";
    cin>>num;
    for(i = num;i > 0;i /= 10){
        j = i % 10;
        sum = sum + (j * j * j);
    }
    if(num == sum)
        cout<<"Armstrong number\n";
    else
        cout<<"Not an armstrong number\n";
    getch();
    return 0;
}
