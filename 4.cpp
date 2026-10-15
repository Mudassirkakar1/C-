
#include <iostream>
using namespace std;

int main() {
    int age;
    int birthYear;

    cout << "Enter your age: ";
    cin >> age;

    birthYear = 2026 - age;

    cout << "Your age is: " << age << endl;
    cout << "Your birth year is approximately: "
         << birthYear << endl;

    return 0;
}

