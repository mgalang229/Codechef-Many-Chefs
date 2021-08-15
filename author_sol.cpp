#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        // start from the fourth to the last character (decreasing iteration)
        for (int i = (int) s.size() - 4; i >= 0; i--) {
            if (s[i] != 'C' && s[i] != '?') {
                // if the first (current) character is not equal to 'C' or '?', then skip
                continue;
            }
            if (s[i + 1] != 'H' && s[i + 1] != '?') {
                // if the second character is not equal to 'H' or '?', then skip
                continue;
            }
            if (s[i + 2] != 'E' && s[i + 2] != '?') {
                // if the third next character is not equal to 'E' or '?', then skip
                continue;
            }
            if (s[i + 3] != 'F' && s[i + 3] != '?') {
                // if the fourth character is not equal to 'F' or '?', then skip
                continue;
            }
            // otherwise, change the characters of the string to "CHEF" correspondingly
            s[i] = 'C';
            s[i + 1] = 'H';
            s[i + 2] = 'E';
            s[i + 3] = 'F';
        }
        // replace all the question marks with letter 'A'
        for (int i = 0; i < (int) s.size(); i++) {
            if (s[i] == '?') {
                s[i] = 'A';
            }
        }
        cout << s << '\n';
    }
    return 0;
}
