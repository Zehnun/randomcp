#include <bits/stdc++.h>
using namespace std;

int main(){
	long long x, y, n, t, sum = 0;
	cin >> t;
	while(t--){
		cin >> x >> y >> n;
		
		for(int i = n; i >= 0; i--){
			if(i % x == y){
				sum = i;
				break;
			}
		}
		cout << sum << endl;
	}

	return 0;

}
