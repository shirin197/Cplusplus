// my first C++ program

#include <iostream> // include the basic input | output libary
using namespace std; // declare to get access to the functionality

class mysecondmain {
public:
    void mysecondMeth(){
        cout <<"hello moritz zwei";
    }
};

int main (){
    cout << "Hello Moritz!" << endl;
    // do while loop
    unsigned i = 1;
    unsigned x = 10;

    do {
        ++i;
        cout <<"hello moritz loop" << endl;
    }
    while (x > i);

    mysecondmain myObj;
    myObj.mysecondMeth();
    return 0;
}