#include <iostream>
using namespace std;

class Box {
    private:
        int length, breadth, height;
    public:
        // default constructor
        Box() {
            length=breadth=height=0;
        }

        // member initializer list
        Box(int l, int b, int h): length(l), breadth(b), height(h) {}

        void display() {
            cout<<"Length: "<<length<<endl;
            cout<<"Breadth: "<<breadth<<endl;
            cout<<"Height: "<<height<<endl;
        }
};

int main() {

    Box b2(2, 3, 5); // parameterized constructor called
    b2.display();

    return 0;
}

/*
------------OUTPUT--------------
Length: 2       
Breadth: 3      
Height: 5
*/