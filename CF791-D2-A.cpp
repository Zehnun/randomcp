#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int l, b;

	int y = 0;
	cin >> l >> b;
	while(l <= b){
		l *= 3;
		b *= 2;
		y++;
	}
	cout << y << endl;
	return 0;

}
