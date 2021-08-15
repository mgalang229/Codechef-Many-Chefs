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
		// reverse the string (since we need to start at the back)
		reverse(s.begin(), s.end());
		for (int i = 0; i < (int) s.size();) {
			// collect every substring with 4 characters
			string temp = s.substr(i, 4);
			bool checker = true;
			// check if the substring either contains a question mark (?) or
			// the position of the letters of FEHC (reverse of CHEF) matches
			// the position of the current substring collected
			string pattern = "FEHC";
			for (int j = 0; j < 4; j++) {
				if (temp[j] != '?' && temp[j] != pattern[j]) {
					// if even one character does not match, then break this loop
					checker = false;
					break;
				}
			}
			if (checker) {
				// if the current substring passes all the conditions, then
				// replace the characters of this substring with "FEHC" correspondingly
				for (int j = 0; j < 4; j++) {
					s[i + j] = pattern[j];
				}
				// skip the next three indices and the current index
				i += 4;
			} else {
				// otherwise, check if the current character is a question mark (?)
				if (s[i] == '?') {
					// if yes, then replace it with letter 'A'
					s[i] = 'A';
				}
				// increment the 'i' by 1
				i++;
			}
		}
		// revert back the string to its normal form
		reverse(s.begin(), s.end());
		cout << s << '\n';
		
	}
	return 0;
}
