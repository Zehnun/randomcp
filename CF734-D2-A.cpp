#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	string k; cin >> k;

	int k_d = 0, k_a = 0;

	for (int i = 0; i <n; i++)
		if(k[i] == 'A') k_a++; else k_d++;
	
	if(k_a == k_d) cout << "Friendship" << endl;
	if(k_a > k_d) cout << "Anton" << endl;
	if(k_a < k_d) cout << "Danik" << endl;

	return 0;
}

