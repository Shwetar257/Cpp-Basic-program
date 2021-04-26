#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int n){
    int fact = 1,i;
    for(i = 1;i <= n;i++)
        fact = fact * i;
    return fact;
}
int main()
{
    int n,r,p;
    cout<<"Enter the number of students\n";
    cin>>n;
    cout<<"Enter the number of seats\n";
    cin>>r;
    if(r < n)
        cout<<"Wrong input\n";
    else{
        p = factorial(r) / factorial(r - n);
        cout<<"The permutation is "<<p;
    }
    getch();
    return 0;
}