#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, i = 0, j, sum = 0, avg, cost = 0, tmp;
        vector < int > vec;
        cin >> n;
        while(i < n) {
	       cin >> j;
	       vec.push_back(j);
	       sum += j;
	       i++;
        }
        avg = sum / n + 1;
        for(i = 0; i < n; i++){

	       tmp = vec[i] - avg;
	       if(tmp < 0) {
		      tmp *= -1;
		      tmp--;
	       }
	       else if(tmp)
		      tmp--;
	       cost += tmp;
        }
        cout << avg << " " << cost << endl;
        return 0;
}
