#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n,sum = 0,i;
    cout<<"Enter the value of n\n";
    cin>>n;
    for(i = 0;i <= n;i++)
    {
        sum = sum + i;
    }
    cout<<"The sum of "<<n<<" natural numbers is "<<sum;
    getch();
    return 0;
}
