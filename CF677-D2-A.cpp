#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int h,w,x,n,ans;
	cin >>n>>h;
	ans = 0;
	for(int i =0; i <n; i++){
		
		cin >> x;
		if(x >h)
			ans++;
		ans++;
	}
	cout << ans <<"\n";
	return 0;
}
