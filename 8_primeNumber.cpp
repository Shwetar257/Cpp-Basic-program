#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num,val = 0,i;
    cout<<"Enter the number\n";
    cin>>num;
    if(num <= 2)
        cout<<"Prime number\n";
    else{
        for(i = 2;i < num;i++){
            if(num % i == 0){
                val = 1;
                break;
            }
        }
        if(val == 0)
            cout<<"Prime number\n";
        else
            cout<<"Not a prime number\n";
    }
    getch();
    return 0;
}