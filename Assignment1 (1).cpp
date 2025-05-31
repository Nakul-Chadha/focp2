#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printFactors(int num) {
    cout << "Factors of " << num << ": ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) cout << i << " ";
    }
    cout << endl;
}

int nextPrime(int num) {
    int next = num + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number.\n";
        cout << "Next prime number: " << nextPrime(n) << endl;
    } else {
        cout << n << " is not a prime number.\n";
        printFactors(n);
    }

    return 0;
}
