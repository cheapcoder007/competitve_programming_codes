#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, i = 1, sum, tmp1, tmp2, maximum, val;
        vector < int > vec, first, last, height;
        cin >> n;
        cin >> tmp1 >> tmp2;
        vec.push_back(tmp1);
        height.push_back(tmp2);
        first.push_back(tmp2);
        minimum = maximum = tmp2;
        sum = tmp1;
       
        while(i < n) {
	       cin >> tmp1 >> tmp2;
	       height.push_back(tmp2);
	       sum += tmp1;
	       vec.push_back(tmp1);
	       maximum = max(tmp2, maximum);
	       first.push_back(maximum);
	       i++;
        }
                
        last.push_back(tmp2);
        for(int k = n - 2; k >= 0; k--) {
	       val = max(height[k], last.back());
	       last.push_back(val);
        }
        
        i = 0;
        reverse(last.begin(), last.end());
        cout << (sum - vec[i]) * last[i + 1] << " ";
        i++;
        while(i < n - 1) {
	       cout << (sum - vec[i]) * max(first[i - 1], last[i + 1]) << " ";
	       i++;
        }
        cout << (sum - vec[i]) * first[i - 1] << " ";
        cout << endl;
        return 0;
}

