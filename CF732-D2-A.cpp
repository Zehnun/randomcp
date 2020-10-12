#include <bits/stdc++.h>
using namespace std;
/*
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int p, c, num = 1;
	cin >> p >> c;
	int x = p + c;
	while((x% 10) != 0){
		p += p;
		num++;
	}
	cout << num << endl;

	return 0;
}
*/

// solution

int main(){
	int n, r;
	cin >> n >> r;
	int ans = 1;
	int cur = n;
	
	while(cur %10 != 0 && cur %10 != r){
		cur += n;
		ans++;
	}
	cout << ans << endl;

	return 0;
}
