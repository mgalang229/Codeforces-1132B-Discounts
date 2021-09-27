#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// calculate the total sum of all the elements
	vector<int> a(n);
	long long total = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i];
	}
	// sort the sequence in non-decreasing order
	sort(a.begin(), a.end());
	int m;
	cin >> m;
	vector<long long> res;
	// subtract the (n - q)-th element from the total sum for every query
	for (int i = 0; i < m; i++) {
		int q;
		cin >> q;
		res.push_back(total - a[n - q]);
	}
	for (auto& e : res) {
		cout << e << " ";
	}
	cout << '\n';
	return 0;
}
