#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x, t;
	vector<int> v;
	cin >> t;
	for(int i = 0; i < t; i++){
	    cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for(int j = 0; j < t; j++){
		cout << v[j] << " ";
	}
	cout << endl;

	return 0;
}


