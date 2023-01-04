#include <iostream>
using namespace std;

class Box {
    private:
        int length, breadth, height;

    public:

        Box() {
            cout<<"Default constructor called"<<endl;
            length=breadth=height=0;
        }

        ~Box() {
            cout<<"Destructor called"<<endl;
        }

        void setData(int x, int y, int z) {
            length=x;
            breadth=y;
            height=z;
        }

        double find_volume() {
            return length*breadth*height;
        }
};

int main() {
    Box b1; //default constructor called

    int a, b, c;
    cout<<"Enter dimensions of box: ";
    cin>>a>>b>>c;

    b1.setData(a, b, c);

    double volume=b1.find_volume();
    cout<<"Volume: "<<volume<<endl;

    return 0;
}

/*
    -------------OUTPUT--------------
    Default constructor called
    Enter dimensions of box: 10 20 35
    Volume: 7000
    Destructor called
*/