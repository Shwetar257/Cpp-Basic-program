#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int fact = 1,i,n;
    cout<"Enter the number\n";
    cin>>n;
    if(n < 0)
        cout<<"Wrong input\n";
    else if(n == 0)
        cout<<"The facorial of 0 is 1";
    else{
        for(i = 1;i <= n;i++)
            fact = fact * i;
        cout<<"The factorial of "<<n<<" is "<<fact;
    }
    getch();
    return 0;
}