#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> count(5, 0);  

    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        count[s]++;
    }

    int taxis = 0;
    taxis += count[4];
    int pairs = min(count[3], count[1]);
    taxis += pairs;
    count[3] -= pairs;
    count[1] -= pairs;
    taxis += count[3];
    taxis += count[2] / 2;
    count[2] %= 2;

    if (count[2]) {
        taxis += 1;
        count[1] -= min(2, count[1]);
    }
    if (count[1] > 0) {
        taxis += (count[1] + 3) / 4;
    }

    cout << taxis << endl;

    return 0;
}
