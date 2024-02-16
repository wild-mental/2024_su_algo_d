#include <iostream>
#include <stack>
#include <string>
using namespace std;

string isVPS(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(') {
            st.push(c);
        }
        else if (c == ')' && !st.empty()) {
            st.pop();
        }
        else if (c == ')') {
            return "NO";
        }
    }

    return st.empty() ? "YES" : "NO";
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        string s;
        cin >> s;

        cout << isVPS(s) << '\n';
    }

    return 0;
}