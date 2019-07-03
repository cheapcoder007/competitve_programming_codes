#include <bits/stdc++.h>
using namespace std;

int main() {
        long long n, N, i;
        n = 1;
        vector < long long > vec;
        for(; n < 1e5; n++)
	       vec.push_back(n * (n + 1) / 2);
        
        cin >> N;
        if(N == 1) {
	       cout << "NO" << endl;
	       return 0;
        }
        for(i = 0; i < 1e5 - 1; i++) {
	       if(binary_search(vec.begin(), vec.end(), N - vec[i])) {
		      cout << "YES" << endl;
		      return 0;
	       }
        } 
        cout << "NO" << endl; 
        return 0;
}
