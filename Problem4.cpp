#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string res;
    int pos = 0;

    while ((pos = s.find("WUB")) != string::npos) {
        if (pos != 0) res += s.substr(0, pos) + " ";
        s.erase(0, pos + 3);
    }

    if (!s.empty()) res += s;

    
    if (!res.empty() && res.back() == ' ') res.pop_back();

    cout << res << endl;

    return 0;
}
