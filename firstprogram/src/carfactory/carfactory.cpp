//
// Created by Nadina Amsler (shirin197)
// 07.10.2021.
//

#include "carfactory.h"
#include "iostream"
using namespace std;

int main(){

    string f1teams[10] {"Ferrari", "Redull", "Haas", "AlphaTauri", "Mercedes", "Williams", "McLarren",
                   "Alpine", "Aston Martin", "Alfa Romeo"};

    for (int i = 0; i < 10; i++){
        cout << f1teams[i] << endl;
    }

    return 0;
}