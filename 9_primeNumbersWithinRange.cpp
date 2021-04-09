#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int l,u,i,j,val;
    cout<<"Enter the lower limit\n";
    cin>>l;
    cout<<"Enter the upper limit\n";
    cin>>u;
    if(l > u)
        cout<<"The lower limit is greater than upper limit\n";
    else
    {
        cout<<"The prime numbers within the given range are\n";
        for(i = l;i <= u;i++){
            val = 0;
            if(i <= 2){
                cout<<i<<" - ";
            }
            else{
                for(j = 2;j < i;j++){
                    if((i % j) == 0){
                        val = 1;
                        break;
                    }
                }
                if(val == 0)
                    cout<<i<<" - ";
            }
        }
    }
    getch();
    return 0;
}