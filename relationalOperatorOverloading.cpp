#include <iostream>
#include <conio.h>
using namespace std;
class student{
    int feet = 0,inch = 0;
    public:
        void getHeight(int f,int i){
            if(f >= 0 && (i >= 0 && i < 12))
            {
                feet = f;
                inch = i;
            }
            else{
                cout<<"Wrong input!!! Values set to 0";
            }
        }
        bool operator >(student obj)
        {
            if(feet > obj.feet)
                return true;
            if(feet == obj.feet && inch > obj.inch)
                return true;
            return false;
        }
};
int main()
{
    student s1,s2;
    s1.getHeight(5,10);
    s2.getHeight(5,11);
    if(s1>s2)
        cout<<"S1 is taller\n";
    else if(s2>s1)
        cout<<"S2 is taller\n";
    else    
        cout<<"Same height\n";
    getch();
    return 0;
}

