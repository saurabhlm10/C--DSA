#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age > 18){
        cout << "You are over 18" << endl;
    } else {
        cout << "You are under 18" << endl;
    }

    while(age < 18) {
        
        cout<< "You are under age " << age << endl;
        age--;
        if(age == 0) break;
    }

    for(int i = 0; i < 3; i++) {
        cout << "Age is " << age << endl;
    }

    int age2 = 22;

    switch(age2) {
        case 20:
            cout << "Age is 20" << endl;
            break;
        default:
            cout << "Age is not 20" << endl;
            break;
    }

    return 0;
}
