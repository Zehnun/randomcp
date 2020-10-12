#include<bits/stdc++.h>
using namespace std;

int main(){
		
	int a, b;
	cin >> a >> b;
	if(abs(a - b) < 2){
		cout << "No" << endl;
	}
	else{
		int j= a*b;
	
		for(int i = 2; i <= 3; i++){
			j *= i;
			if(j %2 !=0){
				cout << "Yes" << endl;
				return 0;
			}
			j = a * b;	
		}
		cout << "No" << endl;		
	}
	return 0;
}
