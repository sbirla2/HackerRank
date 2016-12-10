#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	string t = s;

	int diff = 0;

	for (int i = 0; i < n / 2; i++) {      //Calculate the difference
		char mx = max(s[i], s[n - i - 1]);
		diff += s[i] != mx;
		diff += s[n - i - 1] != mx;
		s[i] = s[n - i - 1] = mx;
	}

	if (diff > k) {      //If difference to be maid is greater than  k then not possible
		cout << -1 << endl;
		return 0;
	}

	for (int i = 0; i < n / 2; i++) {    //Find the differences and iterate over them from 1 to 9 to find the solution.
		int next_diff = diff + (s[i] == t[i] && s[i] != '9') + (s[n - i - 1] == t[n - i - 1] && s[n - i - 1] != '9');
		if (next_diff <= k) {
			s[i] = s[n - i - 1] = '9';
			diff = next_diff;
		}
	}
	if (n % 2 == 1) {
		if (diff < k) s[n / 2] = '9';
	}
	cout << s << endl;

return 0;
}
