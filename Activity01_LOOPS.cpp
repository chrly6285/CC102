#include <iostream>
using namespace std;

int main() {
    // a:
    cout << "a:" << endl;
    for (int i = 0; i < 8; i++) {
        if (i % 2 == 0) {
            cout << " ";
        }
        for (int j = 0; j < 4; j++) {
            cout << " # *";
        }
        cout << endl;
    }

    // b:
    cout << "b:" << endl;
    for (int i = 8; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "# ";
        }
        cout << endl;
        }
        
    // c:
    cout << "c:" << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int h = 0; h < 8 - i; h++) {
            cout << "# ";
        }
        cout << endl;
    }

    // d:
    cout << "d:" << endl;
    for (int i = 1; i <= 8; i++) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl; 
    }
    
    // e:
    cout << "e:" << endl;
   for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}
