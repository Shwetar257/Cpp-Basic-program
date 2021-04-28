#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int dig,sum = 0,i;
    cout<<"Enter the number\n";
    cin>>dig;
    for(i = dig;i > 0;i = (i/10)){
        sum = sum + (i%10);
    }
    cout<<"The sum of digits of "<<dig<<" is "<<sum;
    getch();
    return 0;
}
