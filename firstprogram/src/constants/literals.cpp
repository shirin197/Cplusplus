/*
 * literals
 * @author by Nadina Amsler (shirin197)
 * @date 08.09.2021.
 */

/*
 * \n - newline
 * \r - carriage return
 * \t - tab
 * \v - vertical tab
 * \b - backspace
 * \f - form feed (page feed)
 * \a - alter (beep)
 * \' - single quote (')
 * \" - double quote (")
 * \? - question mark (?)
 * \\ - backslash (\)
 */

#include "iostream"
using namespace std;

// Define your own names for constants that you use very often
#define PI 3.14159
#define NEWLINE '\n'

int main(){

    int a = 5; // literal constant

    // charakter and string literals
    'z';
    "hellomoritz";

    double r = 5.0;
    double circle;

    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;

}
