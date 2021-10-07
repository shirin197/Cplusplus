//
// Created by Nadina Amsler on 17.09.2021.
//

#include "iostream"
using namespace std;

int main(){

    int in_km;
    int in_hr;
    int petrol = 5;

    cout << "Welcome to the calculator" << endl;
    cout << "-------------------------" << endl;
    cout << "Insert how many kilometers you will drive: ";
    cin >> in_km;
    cout << "Insert how long you will drive: ";
    cin >> in_hr;

    cout << "You drive " << in_km << " km in " << in_hr << " hours and you need "
    << petrol << " liter pertrol";

    return 0;
}
