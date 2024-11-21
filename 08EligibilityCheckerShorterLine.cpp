#include <iostream>
using namespace std;

int main() {
    int age;
    double money;
    bool parent = false;
    string show, budget;

    cout << "Enter age: ";
    cin >> age;

    if (age < 16) {
        cout << "With parent? (1=yes, 0=no): ";
        cin >> parent;
    }

    show = (age < 13) ? (parent ? "G & PG Show" : "G Show") :
           (age < 16 ? (parent ? "G, PG & R Show" : "G & PG Show") : "G, PG & R Show");

    cout << "Enter money: ";
    cin >> money;

    budget = money < 7.5 ? "Not Enough Money" :
             money < 10.5 ? "Can go to Matinee Show" : "Can go to Evening & Matinee Show";

    cout << show << endl << budget << endl;
    return 0;
}
