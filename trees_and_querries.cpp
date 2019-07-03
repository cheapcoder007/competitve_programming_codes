#include <iostream>
#include <vector>
using namespace std;



int main() {

        unsigned int  k, l, result = 0, n, m, a, b, v, j, i, size = 0, x, y, count = 1;
        cin >> n >> m;
        int colours[n], current_colours[n];

        for(i = 1; i < n + 1; i++)
	       cin >> colours[i];

        vector < vector < unsigned int > > adlist(n + 1);

        for(i = 0; i < n + 1; i++)
	       adlist[i].push_back(0);

        for(i = 0; i < n - 1; i++) {
	       cin >> a >> b;
	       adlist[a].insert(adlist[a].begin(), b);

	       for(k = 1; k < n + 1; k++) {

		      for(l = 0; l < adlist[k].size(); l++) {
				    
			     if(adlist[k][l] == a) {
				    adlist[k].insert(adlist[k].begin(), b);
				    break;
			     }
		      }
	       }
        }
        
        for(i = 0; i < m; i++) {

	       cin >> v >> j;
	       size = 1;
	       current_colours[size++] = colours[v];

	       for(k = 0; k < adlist[v].size(); k++) {

		      current_colours[size++] = colours[adlist[v][k]];
	       }
 
	       for(x = 1; x < size - 1; x++) {

		      if(!current_colours[x])
			     continue;
		      for(y = x + 1; y < size - 1; y++) {
			     if(current_colours[x] == current_colours[y]) {
				    current_colours[y] = 0;
				    count++;
			     }

		      }
		      if(count >= j)
			     result++;
		      count = 1;
	       }
	       cout << result << endl;
	       result = 0;
        }
        adlist.clear();
        return 0;
}
