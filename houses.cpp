#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int num, money, input;
    vector<int > g;
    for (int i = 0; i < t; i ++){
        cin >> num >> money;
        for(int i = 0; i < num; i++){
            cin >> input;
            g.push_back(input);
        }
        int ans = 0, cnt = 0;
        sort(g.begin(), g.end());
        for(int i=0; i<num; i++){
			ans += g[i];
		   	if (ans <= money){
				cnt++;
            }
        }
        
        cout << "Case #" << i+1 << ":" <<" " << cnt << endl;
    }
    
    
    return 0;
}
