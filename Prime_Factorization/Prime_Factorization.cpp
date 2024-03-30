#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve(int n) {
    vector<int> primeFactors;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0 && isPrime(i)) {
            primeFactors.push_back(i);
            n /= i;
        }
    }

   
    sort(primeFactors.begin(), primeFactors.end());

    for (int factor : primeFactors) {
        cout << factor << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}
