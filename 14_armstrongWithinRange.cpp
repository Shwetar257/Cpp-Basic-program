#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int l,u,temp,i,j,num,var = 0;
    cout<<"Enter the lower limit\n";
    cin>>l;
    cout<<"Enter the upper limit\n";
    cin>>u;
    if(l > u)
        cout<<"Lower limit is greater than upper limit\n";
    else{
        cout<<"The armstrong numbers within range are:\n";
        for(i = l;i <= u;i++){
            num = 0;
            for(j = i;j > 0;j /= 10){
                temp = j % 10;
                num = num + (temp * temp * temp);
            }
            if(i == num){
                cout<<" "<<i<<" - ";
                var++;
            }
        }
        if(var == 0)
            cout<<"There are no armstrong numbers within the given range\n";
    }
    getch();
    return 0;
}