// Write a C++ program to illustrate the overloading of relational operator <.
#include<iostream>
using namespace std;

class distances
{
    int a;
    public:
    void get_data()
    {
        cout<<"Enter the distance"<<endl;
        cin>>a;
    }
    int operator <(distances d)
    {
        if (a<d.a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    distances d1, d2;
    d1.get_data();
    d2.get_data();
    if (d1<d2)
    {
        cout<<"First distance is less than second distance";
    }
    else
    {
        cout<<"Second distance is less than first distance";
    }
    return 0;
}