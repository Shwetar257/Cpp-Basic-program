#include <iostream>
#include <conio.h>
using namespace std;
int binToDec(long bin){
    int i = 1,dec = 0;
    for(bin;bin > 0;bin /= 10){
        dec = dec + (bin % 10) * i;
        i *= 2;
    }
    return dec;
}
int main()
{
    int dec;
    long bin;
    cout<<"Enter the binary number\n";
    cin>>bin;
    dec = binToDec(bin);
    cout<<"The decimal equivalent is "<<dec;
    getch();
    return 0;
}
