#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;
	string rck; cin >> rck;
	int j = 0;
	for (int i = 0; i < t; i++){
	   if(rck[i] == rck[i + 1]){
			j++;
		}
	}
	cout << j << endl;	

	return 0;
}
