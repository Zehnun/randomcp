#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n, b, d, a;
	cin >> n >> b >> d;

	ll sum = 0, ans = 0;;
	for(ll i = 0; i < n; i++){
		cin >> a;
		if(a <= b)
			sum += a;
			if(sum > d){
				ans++;
				sum = 0;
		}
	}
	cout << ans << endl;	
	return 0;
}






















/*
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, b, d, x, r = 0, sum = 0;
	vector<int> h;
	cin >> n >> b >> d;
	
	for(int i = 0; i < n; i++){
		cin >> x;
		cout << x << endl;
		if(x < b){
			h.push_back(x);
			cout << r << " " <<  h[i] << endl;
			r += h[i];
			cout << r << " " << h[i] << endl;
			if(r > d){
				sum++;
				r = 0;
			}
		}
	}
	cout << sum << endl;

	return 0;
}
*/
