#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    double max_gap = max(a[0], l - a[n - 1]) * 2.0;
    for (int i = 0; i < n - 1; i++) {
        max_gap = max(max_gap, double(a[i + 1] - a[i]));
    }

    cout << fixed << setprecision(10) << max_gap / 2.0 << endl;

    return 0;
}
