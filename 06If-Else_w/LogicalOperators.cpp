#include<iostream>
using namespace std;

int main(){
    int age;
    
    cout << "What is your age?: ";
    cin >> age;
    
    if(age < 16){
        cout << "Too young to drive" << endl;
    }
    else if(age >= 16 && age < 18){
        cout << "Better clear the road" << endl;
    }
    else {
        cout << "you are getting pretty old" << endl;
    }
    
    return 0;
}
