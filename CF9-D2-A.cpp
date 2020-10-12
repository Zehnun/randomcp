#include <bits/stdc++.h>
using namespace std;
/*
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, j, b;
	float c;
	cin >> a >> b;
	j = max(a, b);
	c = (6 - (j - 1)) / 6.0;
	cout << c << endl;
	if(1.666 - c == 0.000)
		cout << '1/6';
	if(0.333 - c == 0.000)
		cout << '1/3';
	if(0.5 - c == 0.0)
		cout << '1/2';
	if(.666 - c == 0.000)
		cout << '4/6';
	if(.8333 - c == 0.0000)
		cout << '5/6';
	if(1 - c == 0.0)
		cout << '1/1';
	return 0;
}
*/

//solution

int main(){
	int a, b;
	cin >> a >> b;
	a = max(a, b);
	a = 7 - a;
	b = 6;
	for(int i =1; i < 7; i++)
		if(a%i == 0 && b%i == 0){
			a /= i;
			b /= i;
		}
	cout << a << "/" << b << endl;

	return 0;
}
