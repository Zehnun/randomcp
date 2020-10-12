#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	vector<int> d(9);
	for(int i =0; i<9; i++){
		cin >> d[i];
		cout <<"c"; cout << d[i] << endl;
	}
	cout << " " << endl;
	cout <<"dddddddddddddddddd" << endl;
	for(int i =9; i>0; i--)
		cout << i << " = "<< d[i] - d[i-1] << endl;

	return 0;
};
