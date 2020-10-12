#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin >> t;
	int an = 0;
	int a, b, c;
	int j = 0, p = 0;

	while(t--){
		cin >> a >> b >> c;
		if(a==1)
			j++;
		if(b==1)
			j++;
		if(c==1)
			j++;
		if(j >= 2)
			p++;
		j = 0;
	}
	cout <<p << endl;
	return 0;

}

// actual solution

int main(){
	int n, ans = 0; cin >> n;
	for(int i = 0; i < n; i++){
		int x,y,z; cin >> x,y,z;
		ans += (x+y+z => 2);
	cout << ans << endl;
	}
	
	return 0;
}
