#include <bits/stdc++.h>
using namespace std;

int main() {
        long long n, tmp = 1, val, sasha, dima, dist1, dist2, distance = 0, t1, t2;
        cin >> n;
        vector < vector < int > > df;
        df.assign(n + 1, vector < int > (2, 0));
        while(tmp <= 2 * n) {
	       cin >> val;
	       if(!df[val][0])
		      df[val][0] = tmp;
	       else
		      df[val][1] = tmp;
	       tmp++;
        }
        sasha = dima = 1;
        for(val = 1; val <= n; val++) {
	       t1 = df[val][0];
	       t2 = df[val][1];
	       dist1 = abs(sasha - t1) + abs(dima - t2);
	       dist2 = abs(dima - t1) + abs(sasha - t2);
	       if(dist1 < dist2) {
		      distance += dist1;
		      sasha = df[val][0];
		      dima = df[val][1];
	       }
	       else {
		      distance += dist2;
		      sasha = df[val][1];
		      dima = df[val][0];
	       }
        }
        cout << distance << endl;
        return 0;
}
