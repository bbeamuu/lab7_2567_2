#include <iostream>
using namespace std;

char before(char input) {
    if (input == 'A') {
        return 'Z';
    } else if (input >= 'B' && input <= 'Z') {
        return input - 1;
    } else {
        return '0';
    }
}

int main() {
    cout << before('A') << endl; // Z
    cout << before('B') << endl; // A
    cout << before('P') << endl; // O
    cout << before('T') << endl; // S
    cout << before('Z') << endl; // Y
    cout << before('a') << endl; // 0
    cout << before('0') << endl; // 0
    cout << before('c') << endl; // 0
    return 0;
}
