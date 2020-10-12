#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int h[100], a[100], k = 0, t;
	cin >> t;
	for(int i = 0; i < t; i++)
		cin >> h[i] >> a[i];

	for(int i = 0; i < t; i++)
		for(int j = 0; j < t; j++)
			if(h[i] == a[j])
				k++;
	cout << k << endl;
	

	return 0;
}
