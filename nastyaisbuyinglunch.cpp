#include <bits/stdc++.h>

using namespace std;

//int a[300001][300001];

int main() {
	long n, m, nat, x, y, i, j, temp, ans = 0;
	int flag;
	cin >> n >> m;
	int a[n + 1][n+ 1];
	
	vector <long> ::iterator it, it1, it2;
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= n; j++)
		        a[i][j] = 0;
	}

	vector<long> v(n + 1);

	for(i = 1; i <= n; i++)
	        	cin >> v[i];
	for(i = 1; i <= m; i++) {
		cin >> x >> y;
		a[x][y] = 1;
	}
	
	nat = v[n];
	it = it1 = --v.end();
	it2 = it1 - 1;
	while(m--) {
	         flag = 0;
		while(!a[*it2][*it1]) {
			it1--;
			it2--;
			if(it2 == v.begin()) {
			        flag = 1;
			        break;
			}

		}
		if(flag)
		        break;
		temp = *it1;
		*it1 = *it2;
		*it2 = temp;
		if(*it2 == nat) {
		        if(it2 == v.begin())
			       break;
		        it1 = it2;
		        it = it2;
		        it2--;
		        ans++;
		}
		else {
			it1 = it;
			it2 = it1 - 1;
		}
		
	}

/*	for(i = 1; i <= n; i++)
	        cout << v[i] << " ";
	cout << endl;
*/
	cout << ans << endl;
	return 0;
}
