#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, x, j = 0, sum = 0; cin >> t;
	for(int i = 0; i < t; i++){
		cin >> x;
		sum += x;
		if(sum < 0){
			j++;
			sum = 0;
		}
	
	}
	cout << j << endl;


	return 0;
}
