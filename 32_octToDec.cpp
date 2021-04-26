#include <iostream>
#include <conio.h>
using namespace std;
int octToDec(int oct){
    int dec = 0,i = 1;
    for(oct;oct > 0;oct /= 10){
        dec = dec + (oct % 10) * i;
        i *= 8;
    }
    return dec;
}
int main()
{
    int dec,oct;
    cout<<"Enter the octal number\n";
    cin>>oct;
    dec = octToDec(oct);
    cout<<"The decimal equivalent is "<<dec;
    getch();
    return 0;
}