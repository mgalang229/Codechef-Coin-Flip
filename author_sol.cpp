#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int g;
		cin >> g;
		while (g--) {
			int i, n, q;
			cin >> i >> n >> q;
			// view the iamge in this repository for better understanding
			// A coin flipped even number of times, will show the same side, as it did initially.
			// A coin flipped odd number of times, will show the opposite side, of the one it did initially.
			if (n % 2 == 0 || i == q) {
				// if 'i' matches with 'q' then the even position element will be counted
				cout << n / 2;
			} else {
				// otherwise, the odd position element will be counted
				cout << n / 2 + 1;
			}
			cout << '\n';
		}
	}
	return 0;
}
