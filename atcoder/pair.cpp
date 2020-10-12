#include <bits/stdc++.h>
using namespace std;

int main(){
	int k; cin >>k;
	int odd = 0, even =0;
	for(int i = 1; i <= k; i++){
		if( i % 2 == 0 )
			even++;
		else
			odd++;
	}
	cout << even * odd << endl;
	return 0;
}
