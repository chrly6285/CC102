#include<iostream>
using namespace std;

int main(){
    int currTemp;
    
    cout << "What's the temperature right now in degrees?: ";
    cin >> currTemp;
    
    if(currTemp < 32){
        cout << "Bring a heavy jacket" << endl;
    }
    else if(currTemp <= 50){
        cout << "Bring a light jacket" << endl;
    }
    else {
        cout << "Don't bring any jacket" << endl;
    }
    
    return 0;
}
