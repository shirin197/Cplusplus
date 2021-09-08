/*
 * @author Nadina Amsler(shirin197)
 * @date   08.09.2021
 */


/* standart reserved keywords
 * asm, auto, bool, break, case, catch, char, class, const, const_cast, continue, default, delete,
do, double, dynamic_cast, else, enum, explicit, export, extern, false, float, for, friend, goto,
if, inline, int, long, mutable, namespace, new, operator, private, protected, public, register,
reinterpret_cast, return, short, signed, sizeof, static, static_cast, struct, switch, template,
this, throw, true, try, typedef, typeid, typename, union, unsigned, using, virtual, void,
volatile, wchar_t, while
 */

// wchar_t : Wide character 2 or 4 bytes

#include "iostream"
using namespace std;

int main(){
    // Very simple math
    int a = 5;
    int b = 2;
    a = a +  1;
    int result = a + b;

    cout << result << endl; // output : 6

    unsigned short int NumberOfSisters = 5; // unsigned : positive number and zero
    signed int MyAccountBalance = -1;        // signed   : both positive and negative values

    signed int results = NumberOfSisters + MyAccountBalance;
    cout << results; // output : 4

    return 0;

}