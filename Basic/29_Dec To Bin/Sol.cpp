#include <iostream>
#include <conio.h>
using namespace std;
long decToBin(int dec){
    long bin = 0;
    int i = 1;
    for(dec;dec > 0;dec /= 2){
        bin = bin + (dec % 2) * i;
        i *= 10;
    }
    return bin;
}
int main()
{
    long bin;
    int dec;
    cout<<"Enter the decimal number\n";
    cin>>dec;
    bin = decToBin(dec);
    cout<<"The binary equivalent is "<<bin;
    getch();
    return 0;
}
