#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the x-coordinate\n";
    cin>>x;
    cout<<"Enter the y-coordinate\n";
    cin>>y;
    if(x == 0 && y == 0)
        cout<<"The point is in the origin\n";
    else if(x > 0){
        if(y > 0)
            cout<<"1st quadrant\n";
        else
            cout<<"4th quadrant\n";
    }
    else{
        if(y > 0)
            cout<<"2nd quadrant\n";
        else
            cout<<"3rd quadrant\n";
    }
    getch();
    return 0;
}
