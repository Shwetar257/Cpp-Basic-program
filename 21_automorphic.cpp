#include <iostream>
#include <conio.h>
using namespace std;
int checkAutomorphic(int num){
    int n = 0,i,j = 1,len = 0,sq;
    for(i = num;i > 0;i /= 10)
        len++;
    sq = num * num;
    for(i = 0;i < len;i++){
        n = n + ((sq % 10) * j);
        sq /= 10;
        j *= 10;
    }
    if(n == num)
        return 1;
    else
        return 0;
}
int main()
{
    int num,var;
    cout<<"Enter the number\n";
    cin>>num;
    var = checkAutomorphic(num);
    if(var == 1)
        cout<<"Automorphic number\n";
    else
        cout<<"Not an automorphic number\n";
    getch();
    return 0;
}