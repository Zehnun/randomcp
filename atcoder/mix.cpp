#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> a;
	for(int i = 0; i < n; i++){
		int p;
		cin >> p;
		a.push_back(p);
	}
	sort(a.begin(), a.end());
	int ans = 0;	
	for(int i = 0; i<k; i++){
		ans += a[i];
	}
	cout << ans << endl;
	return 0;
}
