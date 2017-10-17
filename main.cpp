#include <iostream>


using namespace std;

int main() {


    string defaultPassword = "google";

    string inputPassword;


    cin >> inputPassword;


if(defaultPassword == inputPassword) {
    cout << "Hasło jest prawidłowe" << endl;
} else { cout << "Haslo nie jest prawidłowe" << endl;}
    return 0;
}




