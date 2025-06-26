#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;

        bool found = false;

        // Try all possible Bob's positions (1 to 100), excluding a
        for (int b = 1; b <= 100; ++b) {
            if (b == a) continue;

            int bob_to_x = abs(b - x);
            int bob_to_y = abs(b - y);
            int alice_to_x = abs(a - x);
            int alice_to_y = abs(a - y);

            if (bob_to_x < alice_to_x && bob_to_y < alice_to_y) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}
