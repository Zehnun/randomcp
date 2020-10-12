#include <bits/stdc++.h>
using namespace std;

string f(long long n){
	if(n == 0) return "";
	n--;
	return f(n/26) + string(1, 'a'+n%26);
}
int main(){
	long long n;
	cin >> n;
	cout << f(n) << endl;
	return 0;
}
