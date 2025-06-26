#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, t;
    cin >> n >> k >> t;

    int total = (t * n * k) / 100;

    int full_blocks = total / k;
    int partial_fill = total % k;

    vector<int> bar(n, 0);

    for (int i = 0; i < full_blocks; i++) {
        bar[i] = k;
    }

    if (full_blocks < n) {
        bar[full_blocks] = partial_fill;
    }

    for (int i = 0; i < n; i++) {
        cout << bar[i] << " ";
    }
    cout << endl;

    return 0;
}
