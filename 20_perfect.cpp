#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,per = 0,i,temp;
    cout<<"Enter the number\n";
    cin>>num;
    for(i = 1;i < num;i++){
        if(num % i == 0)
            per = per + i;
    }
    if(num == per)
        cout<<"Perfect number\n";
    else
        cout<<"Not a perfect number\n";
}