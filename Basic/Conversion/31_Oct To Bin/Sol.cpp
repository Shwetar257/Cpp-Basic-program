#include <iostream>
#include <conio.h>
using namespace std;
long octToBin(int oct){
    long bin = 0;
    int i,j,temp = 1;
    for(oct;oct > 0;oct /= 10){
        i = oct % 10;
        for(j = 0;j < 3;j++){
            bin = bin + (i % 2) * temp;
            i /= 2;
            temp *= 10;
        }
    }
    return bin;
}
int main()
{
    int oct;
    long bin;
    cout<<"Enter the octal number\n";
    cin>>oct;
    bin = octToBin(oct);
    cout<<"The binary equivalent is "<<bin;
    getch();
    return 0;
}
