#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, rev;
    cout << "Enter the string: ";
    cin >> str;

    rev.resize(str.length());
    for (int i = 0; i < str.length(); i++) {
        rev[i] = str[str.length() - 1 - i];
    }

    cout << "Reversed string: " << rev << endl;
    return 0;
}
