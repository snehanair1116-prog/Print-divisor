#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Divisors of " << n << " are: ";

    // Optimized loop up to square root
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            // Print the first divisor in the pair
            cout << i << " ";

            // Print the paired divisor (if it's not the same number)
            // Example: for 36, if i is 6, n/i is also 6. Don't print twice!
            if (i != n / i) {
                cout << n / i << " ";
            }
        }
    }

    return 0;
}