#include <bits/stdc++.h>
using namespace std;

int main() {
        int v, j, tmp;
        unsigned int i;
        cin >> v;
        vector < int > vec, result;
        vec.push_back(0);
        result.push_back(0);
        for(i = 1; i < 10; i++) {
	       cin >> tmp;
	       vec.push_back(tmp);
        }
        i = 9;
        
        while(v > 0) {
	       tmp = v / vec[i];
	       result.push_back(tmp);
	       v -= vec[i] * tmp;
	       i--;
        }
        for(i = 1; i < result.size(); i++)
	       cout << result[i] << " ";
        cout << endl;
        for(i = 1; i < 10; i++) {
	       for(j = 1; j <= result[i]; j++)
		      cout << result[i];
        }
        return 0;
}
