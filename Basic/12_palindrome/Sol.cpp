#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,rev = 0,temp = 10,i;
    cout<<"Enter the number\n";
    cin>>num;
    for(i = num;i > 0;i /= 10)
        rev = (rev * temp) + (i % 10);
    if(rev == num)
        cout<<"The number is palindrome\n";
    else
        cout<<"The number is not palindrome\n";
}
