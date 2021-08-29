// my first C++ program

/*
 * @author Nadina Amsler(shirin197)
 * @date   27.08.2021
 */

#include <iostream> // include the basic input | output libary
using namespace std; // declare to get access to the functionality

class mysecondmain {
public:
    void mysecondMethod(){
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


    // Benutzereingabe
    unsigned ii = 1;
    unsigned benutzer = 0;

    cout <<"Bitte gebe ein Zahl ein" << endl;
    cin >> benutzer;

    do{
        cout << ii << :: endl;
        ii++;
    }while(ii <= benutzer);

    mysecondmain myObj;
    myObj.mysecondMethod();

    return 0;
}