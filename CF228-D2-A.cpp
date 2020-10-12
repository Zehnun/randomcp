#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> a;
	int b = 0;

	cin >> a[0] >> a[1] >> a[2] >> a[3];
	sort(a.begin(), a.end());
	for(int i = 0; i < 3; i++){
		if(a[i] == a[i + 1])
			b++;
	}
	if (b > 0)
		cout << b << endl;
	else
		cout << 0 << endl;

	return 0;
}

// using set

int main(){

	set<int> s;
	int a;

	for(int i =0; i < 4; i++){
		cin >> a;
		s.insert(a);
	}

	cout << 4 - s.size() << endl;
}
