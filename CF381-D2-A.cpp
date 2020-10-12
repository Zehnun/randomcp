#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int  s = 0, d =0, t, x;
	cin >> t;
	deque<int> v;
	for(int i = 0; i < t; i++){
		cin >> x;
		v.push_back(x);
	}
	int y = 0;
	while(!(v.empty())){
		if( y %2 != 0)
			if(v.front() > v.back()){
				d += v.front();
				v.pop_front();
			}
			else{
				d += v.back();
				v.pop_back();
			}
		else
			if(v.front() > v.back()){
				s += v.front();
				v.pop_front();
			}
			else{
				s += v.back();
				v.pop_back();
			}
		y++;

	}
	cout << s << " " << d << endl;

	return 0;
}
