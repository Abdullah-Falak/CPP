#include <iostream>
using namespace std;

int main() {
    int n, o,rem,rev=0;
    cout << "Enter a number: ";
    cin >> n;
    o=n;

   

      while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    // Check if the sum of divisors is equal to the number
    if (o == rev) {
        cout << "Palindrome number" << endl;
    } else {
        cout << "Not a palindrome number" << endl;
    }

    return 0;
}
