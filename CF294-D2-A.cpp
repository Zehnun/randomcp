#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, r;
	cin >> n;
	int a[n+1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int m; cin >> m;
	int x, y;
	for(int i =1; i <= m; i++){
		cin >> x >> y;
		r = a[x] - y;
		a[x+1] += r;
		a[x-1] += (y - 1);
		a[x] = 0;
	}
	for(int i =1; i <= n; i++){
		cout << a[i] << endl;
	}
	return 0;
}






















































/*
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x; cin >> t;
	int a[102];
	for(int i = 1; i <= t; i++)
		cin >> x;
	int m, w, l;
	cin >> m;
	for(int i = 1; i <= m; i++){
		cin >> w >> l;
		a[w-1] = l - 1;
		a[w+1] = a[w] - l;
		a[w] = 0;
	}
	for(int i = 1; i <= t; i++)
		cout << a[i] << endl;

	
	return 0;
}*/
