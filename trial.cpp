#include <bits/stdc++.h>

using namespace std;

//int a[300001][300001];
vector < int > a[300001];
//vector < vector < int > > a(300001);
//vector < vector < int > > a(300001, vector < int > (300001, 0));
int main() {
	long n, m, nat, x, y, i, temp, ans = 0;
	unsigned int j;
	int flag;
	cin >> n >> m;
//	int a[n + 1][n+ 1];
	
	vector <long> ::iterator it, it1, it2;
/*	for(i = 1; i <= n; i++) {
		for(j = 1; j <= n; j++)
		        a[i][j] = 0;
	}
*/
	vector<long> v(n + 1);

	for(i = 1; i <= n; i++)
	        	cin >> v[i];
	for(i = 1; i <= m; i++) {
		cin >> x >> y;
		a[x].push_back(y);
	}
	for(i = 1; i < n + 1; i++)
	        sort(a[i].begin(), a[i].end());
/*	for(i = 1; i< n + 1; i++) {
	        for(j = 0; j < a[i].size(); j++)
		       cout << a[i][j] << " ";
	        cout << endl;
	}
*/	
	nat = v[n];
	it = it1 = --v.end();
	it2 = it1 - 1;
	while(m--) {
	         flag = 0;
		while(!(binary_search(a[*it2].begin(), a[*it2].end(), *it1))) {
			it1--;
			it2--;
			if(it2 == v.begin() || it1 == v.begin()) {
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
			if(it1 == v.begin() || it2 == v.begin())
			        break;
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
