#include <bits/stdc++.h>
#include <fstream>
using namespace std;

ifstream fin("sort.in");
ofstream fout("sort.out");

int main(){
	long long n, l;
	vector<long long> a;
	fin >> n;
	for(int i = 0; i < n; i++){
		fin >> l;
		a.push_back(l);
	}		
	sort(a.begin(), a.end());
	for(int i = 0; i < a.size(); i++){
		fout << a[i] << " ";
	}
	return 0;
}
