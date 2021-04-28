#include <iostream>
#include <conio.h>
using namespace std;
int binToOct(long bin){
    int i,oct = 0,var,j = 1,n,temp;
    for(bin;bin > 0;){
        var = 0;
        n = 0;
        temp = 1;
        for(i = 1;i < 1000 && bin > 0;i *= 10){
            var = var + (bin % 10) * i;
            bin /= 10;
        }
        for(var;var > 0;var /= 10){
            n = n + (var % 10) * temp;
            temp *= 2;
        }
        oct = oct + (n * j);
        j *= 10;
    }
    return oct;
}
int main()
{
    int oct;
    long bin;
    cout<<"Enter the binary number\n";
    cin>>bin;
    oct = binToOct(bin);
    cout<<"The octal equivalent is "<<oct;
    getch();
    return 0;
}
