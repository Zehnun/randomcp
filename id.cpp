#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main(){
	ofstream myfile;
	myfile.open("busven.txt");
	string arr[] = {"african", "american", "black", "muslim", "somali", "turkish", "minnesota", "twincity", "student", "compsci/programmer", "konya"};
	for(int i = 0; i < 11; i++){
		for(int j = 0; j < 11; j++){
			myfile << arr[i] << " " << arr[j] << endl;
		}	
	}
	return 0;
}
