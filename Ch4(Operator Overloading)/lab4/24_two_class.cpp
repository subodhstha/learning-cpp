// Create two classes X and Y. If a is an object of X and b is an object of Y and 
// if you want to do a=b; what type of conversion routine should be used and where?

#include<iostream>
using namespace std;
class x
{
    int a;
    public:
    void get_data()
    {
        cout<<"Enter any number "<<endl;
        cin>>a;
    }
    int get_value()
    {
        return a;
    }
};

class y
{
    int b;
    public:
    y(x d)
    {
        b=d.get_value();
    }
    void display()
    {
        cout<<"The value is "<<b<<endl;
    }
};

int main()
{
    x a;
    a.get_data();
    y b=a;
    b.display(); 
}