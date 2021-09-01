//
// Created by Nadina Amsler on 01.09.2021.
//

#include "iostream"
using namespace std;

int main(){
    for (int i = 1; i <= 20; i++){
        // break
        if (i == 19 + 1){
            break;
        }
        cout << i << endl;
    }
    return 0;
}