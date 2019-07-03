#include <bits/stdc++.h>
using namespace std;

int n, m, i = 1, result, tmp, d;
static int stat;
int main() {
        vector < int > vec;
        cin >> n >> m >> d;
        cin >> tmp;
        vec.push_back(tmp);
        stat = tmp % d;
        while(i < n * m) {
	       cin >> tmp;
	       if(stat != tmp % d) {
		      cout << "-1" << endl; 
		      return 0;
	       }
	       vec.push_back(tmp);
	       i++;
        }
        sort(vec.begin(), vec.end());
        tmp = vec.size();
        tmp /= 2;
        for(i = 0; i < n * m; i++)
	       result += abs(vec[tmp] - vec[i]) / d;
        cout << result << endl;
        return 0;
}
