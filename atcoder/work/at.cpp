#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	while(n > 0){
		n -= k;
	}
	if(n == 0)
		cout << n << endl;
	else
		cout << k + n << endl;
 //	cout << n - k << endl;

	return 0;
}
