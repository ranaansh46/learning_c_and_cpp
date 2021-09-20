//program to find the area and circumference of the circle
#include <iostream>
const float pi=3.1452;
using namespace std;
class circle{
    public: 
    float area(float rad){
        return pi*rad*rad; 
    }
    float cir(float rad){
        return pi*rad*2; 
    }
};
int main()
{
    float rad,op;
    int cas;
    circle circle;
    p1:
    cout<<"enter radius of the circle"<<endl;
    cin>>rad;
    cout<<"please select an operation\n 1. find area\n 2. find circumference\n";
    cin>>cas;
    switch (cas)
    {
        case 1:
            op=circle.cir(rad);
            cout<<"circumference of circle is "<<op;
            break;
        case 2:
            op=circle.cir(rad);
            cout<<"circumference of circle is "<<op;
            break;
        default:
        cout<<"invalid choice"<<endl;
        goto p1;
    }
}
