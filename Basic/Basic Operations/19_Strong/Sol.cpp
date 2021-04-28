#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j,num,fact = 1,str = 0,temp;
    cout<<"Enter the number\n";
    cin>>num;
    for(i = num;i > 0;i /= 10){
        temp = i % 10;
        fact = 1;
        if(temp == 0)
            str++;
        else{
            for(j = 1;j <= temp;j++)
                fact = fact * j;
            str = str + fact;
        }
    }
    if(num == str)
        cout<<"Strong number\n";
    else
        cout<<"Not a strong number\n";
    getch();
    return 0;
}
