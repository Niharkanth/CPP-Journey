#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "ENTER HOW MANY NUMBERS : ";
    int n;
    cin >> n;

    vector<int> a;

    for (int i = 1; i <= n; i++) {
        cout << "ENTER " << i << " NUMBER : ";
        int x;
        cin >> x;
        a.push_back(x);
    }

    // Optimized Bubble Sort
    for (int j = 1; j < n; j++) {
        bool swapped = false;

        for (int i = 0; i < n - j; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

    // Print sorted elements
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
