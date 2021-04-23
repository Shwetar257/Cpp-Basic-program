#include <iostream>
#include <conio.h>
using namespace std;
int decToOct(int dec){
    int oct = 0;
    int i = 1;
    for(dec;dec > 0;dec /= 8){
        oct = oct + (dec % 8) * i;
        i *= 10;
    }
    return oct;
}
int main()
{
    int dec,oct;
    cout<<"Enter the decimal number\n";
    cin>>dec;
    oct = decToOct(dec);
    cout<<"The octal equivalent is "<<oct;
    getch();
    return 0;
}