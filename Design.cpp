#include<iostream>
using namespace std;

// Utility to check if number is composite
bool isComposite(int x) {
    if (x <= 3) return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return true;
    return false;
}

int main() {
    int n;
    cin >> n;

    for (int i = 4; i < n; ++i) {
        int j = n - i;
        if (isComposite(i) && isComposite(j)) {
            cout << i << " " << j << endl;
            break;
        }
    }

    return 0;
}
