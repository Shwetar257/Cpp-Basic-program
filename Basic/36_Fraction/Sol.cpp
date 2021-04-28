#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n1,n2,n3,d1,d2,d3;
    cout<<"Enter the first numerator\n";
    cin>>n1;
    cout<<"Enter the second numerator\n";
    cin>>n2;
    cout<<"Enter the first denominator\n";
    cin>>d1;
    cout<<"Enter the second denominator\n";
    cin>>d2;
    n3 = (n1 * d2) + (n2 * d1);
    d3 = d1 * d2;
    cout<<"The resultant fraction is "<<n3<<"/"<<d3;
    getch();
    return 0;
}
