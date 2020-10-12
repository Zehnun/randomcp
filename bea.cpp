#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a;
	cin >> a;
	vector<int> h;
	for(int i = 0; i < a; i++){
		int b;
		cin >> b;
		h.push_back(b);
	}
	sort(h.begin(), h.end());
	for(int i = 0; i < h.size(); i++)
		cout << h[i] << endl;
		

	return 0;
}
