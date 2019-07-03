#include <bits/stdc++.h>
using namespace std;

int findmin(vector < int > vect, int n);

int main() {
        int n, m, i, x, y, answer = 0, index;
        cin >> n >> m;
        vector < int > weights(n + 1, 0), energy(n + 1);
        vector < vector < int > > graph(n + 1);

        for(i = 1; i < n + 1; i++)
	       cin >> energy[i];
        for(i = 1; i <= m; i++) {

	       cin >> x >> y;
	       graph[x].push_back(y);
	       graph[y].push_back(x);
	       weights[x] += energy[y];
	       weights[y] += energy[x];

        }
 
        for(i = 1; i <= n; i++)
	       cout << weights[i] << " ";
        cout << endl;      

        for(i = 1; i < n; i++) {

	       index = findmin(weights, n + 1);
	       cout << index << " = index " << endl;
	       cout << weights[index] << " ds" << endl;
	       answer += weights[index];
	       weights[index] = 0;

	       for(unsigned int j = 0; j < graph[index].size(); j++) {
		      cout << "ewe\n";
		      weights[graph[index][j]] -= energy[index];
	       }
        
        for(int j = 1; j <= n; j++)
	       cout << weights[j] << " ";
        cout << endl;

        }
        
        cout << answer << endl;
        return 0;
}

int findmin(vector < int > vec, int n) {
        int index, min = INT_MAX, i;
       
        for(i = 1; i <= n; i++) {

	       if(vec[i] > 0) {
		       if(vec[i] < min) {
			      min = vec[i];
			      index = i;
		       }
	       }
        }
        return index;
}
