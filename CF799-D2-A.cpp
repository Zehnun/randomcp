#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n, t, k, d;
	cin >> n >> t >> k >> d;
	int crt = 0;
	while (crt <= d){
		n -= k;
		crt += t;
	}
	if(n > 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


	return 0;
}
