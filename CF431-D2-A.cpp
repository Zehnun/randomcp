#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<int, int> v;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	string num; cin >> num;
	v['1'] = a;
	v['2'] = b;
	v['3'] = c;
	v['4'] = d;
	int sum = 0;
	for(int i = 0; i < num.length(); i++)
		sum += v[num[i]];
	cout << sum << endl;

	return 0;
}
// better solution

int main(){
	int a[5];
	for( int i = 0; i < 4; i++)
		cin >> a[i];
	string num; cin >> num;
	int sum = 0;
	for(int i = 0; i<str.length(); i++)
		sum += a[str[i - '1']];

	cout << sum << endl;


	return 0;
}
