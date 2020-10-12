#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, i, j, h = 0, y = 0;
	int arr[5][5];
	for(i = 0; i <5; i++){
	   for(j = 0; j < 5; j++){
			cin >> x;
			arr[i][j] = x;
			if(x==1){
				y = abs(2 - j);
				h = abs(2 - i);
				cout << y + h << endl;
			}
		}
	}
	return 0;
}

// actual solution
// no need a 2d array
