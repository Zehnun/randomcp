#include <bits/stdc++.h>
using namespace std;

vector<int> withdraw(int amount){


	 int atm [3] = { 100, 50, 20}; 
    vector<int> j(3);
    int i = 0;
    int change =0;
    while(amount > 0){
      if(amount - atm[i] > 0){
        change++;
        amount -= atm[i];
        j[i] = change;
      }
      else{
        i++;
      }
    }
  return j;
}
int main(){

	int amount; cin >> amount;

	int k = withdraw(int amount);
	cout << k << endl;
	return 0;
}
