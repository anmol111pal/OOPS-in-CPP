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

        // parameterized constructor
        Box(int l, int b, int h) {
            length=l;
            breadth=b;
            height=h;
        }

        //  copy constructor
        Box(Box& obj) {
            length=obj.length;
            breadth=obj.breadth;
            height=obj.height;
        }

        void display() {
            cout<<"Length: "<<length<<endl;
            cout<<"Breadth: "<<breadth<<endl;
            cout<<"Height: "<<height<<endl;
        }
};

int main() {
    Box b1; // default constructor called
    b1.display();
    cout<<"------------------"<<endl;

    Box b2(2, 3, 5); // parameterized constructor called
    b2.display();
    cout<<"------------------"<<endl;

    Box b3(b2); // copy constructor called
    b3.display();

    return 0;
}

/*
------------OUTPUT--------------
Length: 0
Breadth: 0        
Height: 0
------------------
Length: 2
Breadth: 3        
Height: 5
------------------
Length: 2
Breadth: 3        
Height: 5
*/