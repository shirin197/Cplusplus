/*
 * U can choose if u bought something or get money
 * @author by Nadina Amsler (shirin197)
 * @date 09.09.2021 - 10.09.2021
 */

/*
 * at the moment, when you choose a method and then choose another the balance is the one from the start !!
 */
#include "iostream"
#include <stdio.h>
#define RED     "\033[31m"      /* Red */
#include <stdlib.h>

using namespace std;

// Global variables

// different account balance variables
float am_m_01;
float am_m_02;
float accountbalance;


// method exit to end the program
void exit() {
    cout << "exit";
};

// method to add money to the current account balance
void add() {

    cout << "Add money\n";
    cout << "---------\n";
    cout << "How much money do you wanna add: ";
    cin >> am_m_01;
    //    accountbalance = accountbalance + am_m_01;
    accountbalance += am_m_01;
    cout << "Your new account balance is: " << accountbalance << " Fr\n";
}

// method to draw money from the current account balance
void draw() {
    cout << "draw money\n";
    cout << "---------\n";
    cout << "How much money do you wanna draw: ";
    cin >> am_m_02;
    system("Color 00");

    accountbalance -= am_m_02;

    if (accountbalance < 0) {
        system("Color 04"), cout << "You dont have enough money!\n"; /*set color form text red*/
        accountbalance += am_m_02;

    } else {
        cout << "Your new account balance is: " << accountbalance << " Fr\n";
    }

}


int main() {
    // variable for the input
    int input;
    cout << (4, "How much money do you have: ");
    cin >> accountbalance;
    cout << "Your current account balance: " << accountbalance << " Fr \n";

    // do while loop
    do {
        cout << "Choose an option \n";
        cout << "--------------- \n";
        cout << "When you want to add money press '1' \n";
        cout << "When you want to draw money press '2' \n";
        cout << "When you want to end the program press '3' \n";
        cout << "I choose option: ";
        cin >> input;

        // switch case to choose the method
        switch (input) {
            case 1:
                add();
                break;

            case 2:
                draw();
                break;

            case 3:
                exit();
                break;

            case 4: {
                if (input < 3) {
                    cout << "This not an option choose one from 1-3!\n";
                    break;
                }
            }
        }
    } while (input != 3);

    return 0;
}

