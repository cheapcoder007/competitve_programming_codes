#include <bits/stdc++.h>
using namespace std;
int main() {
        int n;
        cin>>n;
        vector<string> v;
        for(int i = 0; i < n; i++) {
	       string tem;
	       cin>>tem;
	       v.push_back(tem);
        }
        for(int i = 0; i < n; i++)
	        cout<<v[i]<<endl;
}
