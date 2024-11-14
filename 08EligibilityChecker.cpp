#include <iostream>
using namespace std;

int main() {
    int age;
    char withParent;
    double money;
    bool isWithParent;

    // Movie showtime prices
    double matineePrice = 7.50; 
    double eveningPrice = 10.50;

    // Input age
    cout << "Enter your age\t\t\t\t:\t";
    cin >> age;

    // Input if they are with a parent
    cout << "Are you with a parent? (y/n)\t\t:\t";
    cin >> withParent;
    isWithParent = (withParent == 'y' || withParent == 'Y');

    // Input amount of money
    cout << "Enter the amount of money you have\t:\t";
    cin >> money;
	cout << "**************************************************************";
    // Determine available movie ratings
    cout << "\nYou can attend the following movie types\t:\t";
    if (age < 13) {
        if (isWithParent) {
            cout << "- G, PG" << endl;
        } else {
            cout << "G" << endl;
        }
    } else if (age >= 13 && age < 16) {
        if (isWithParent) {
            cout << "G, PG, R";
        } else {
            cout << "G, PG";
        }
    } else if (age >= 16) {
        cout << "G, PG, R";
    }

    // Check if they can afford matinee or evening shows
    cout << "\nBased on your money, you can attend\t\t:\t";
    if (money >= eveningPrice) {
        cout << "Evening";
    } else if (money >= matineePrice) {
        cout << "Matinee";
    } else {
        cout << "Not enough money for a ticket.";
    }

    return 0;
}

