#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, remainder, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;

    while (n != 0) {
        remainder = n % 10;
        sum += pow(remainder, 3);
        n /= 10;
    }

    if (sum == original) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }

    return 0;
}