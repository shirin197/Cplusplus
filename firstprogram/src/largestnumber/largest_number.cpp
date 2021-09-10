/*
 * largest Number
 * @author by Nadina Amsler (shirin197)
 * @date 09.09.2021.
 */

#include "iostream"
using namespace std;

int main(){
     float number1, number2, number3;

     cout << " Enter three numbers: ";
     cin >> number1 >> number2 >> number3;

     if ((number1 >= number2) && (number1 >= number3))
         cout << "The largest number is: " << number1;
     else if ((number2 >= number1) && (number2 >= number3))
         cout << "The largest number is: " << number2;
     else if ((number3 >= number1) && (number3 >= number2))
         cout << "The largest number is: " << number3;

     return 0;
}
