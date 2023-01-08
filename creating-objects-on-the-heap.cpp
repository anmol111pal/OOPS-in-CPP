#include <iostream>
using namespace std;

class Box {
    private:
        int length, breadth, height;
    public:
        Box() : length(0), breadth(0), height(0) {}

        Box(int l, int b, int h) : length(l), breadth(b), height(h) {}

        ~Box() {}

        void getVolume() {
            int volume=length*breadth*height;
            cout<<"Volume: "<<volume<<endl;
        }

        void displayDimensions() {
            cout<<"Length: "<<length<<endl;
            cout<<"Breadth: "<<breadth<<endl;
            cout<<"Height: "<<height<<endl;
        }
};

int main() {
    Box* box=new Box(2, 4, 7); // memory allocated on the heap

    box->displayDimensions();
    box->getVolume();

    delete box; // since the object was created on the heap, we have to de-allocate its memory
    return 0;
}

/*
---------OUTPUT-----------
Length: 2       
Breadth: 4      
Height: 7       
Volume: 56
*/