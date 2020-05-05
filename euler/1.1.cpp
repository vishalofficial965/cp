#include<bits/stdc++.h>
using namespace std;
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	c_p_c();
	int t; int n;  int cnt = 0;
	cin >> t;
	while (t--) {

		cin >> n;
		int ar[n];
		for (int i = 0; i < n; i++) {
			cin >> ar[i];
		}
		for (int i = 0; i < n; i++) {
			if (ar[i + 1] == 0 && ar[i + 2] == 0 && ar[i + 3] == 0 && ar[i + 4] == 0 && ar[i + 5] == 0 && ar[i + 6] == 0) {
				cnt = -1; cout << "No";
			}
		}
		if (cnt != -1) {
			cout << "yes";
		}

	}
	return 0;
}