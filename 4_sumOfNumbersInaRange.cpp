#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int l,u,sum = 0,i;
    cout<<"Enter the lower limit\n";
    cin>>l;
    cout<<"Enter the upper limit\n";
    cin>>u;
    if(l <= u){
        for(i = l;i <= u;i++){
            sum = sum + i;
        }
        cout<<"The sum is "<<sum;
    }
    else
        cout<<"Lower limit is greater than upper limit\n";
    getch();
    return 0;
}