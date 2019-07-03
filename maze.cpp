#include <bits/stdc++.h>
using namespace std;


int m, n, k, i, j, breaker = false;
vector < vector < char > > maze, visited;


int DFS(int i, int j) {

        if(i < 1 || j < 1 || i > m || j > n)
	       return -1;
        visited[i][j] = '.';
	       
        if(!visited[i - 1][j])
	       DFS(i - 1, j);
	       
        if(i + 1 <= m && !visited[i + 1][j])
	       DFS(i + 1, j);
        if(!visited[i][j - 1])
	       DFS(i, j - 1);

        if(j + 1 <= n && !visited[i][ j + 1])
	       DFS(i, j + 1);
        if(k) {
	       visited[i][j] = 'X';
	       k--;

        }
        return 0;
}

int main() {
        cin >> m >> n >> k;
        maze.assign(m + 1, vector < char > (n + 1, 0));
        visited.assign(m + 1, vector < char > (n + 1, '\0'));
        for(i = 1; i < m + 1; i++) {
	       for(j = 1; j <= n; j++) {
		      cin >> maze[i][j];
		      if(maze[i][j] == '#')
			     visited[i][j] = '#';
	       
	       }
        }
        for(i = 1; i <= m; i++) {
	       for(j = 1; j <= n; j++) {
		      if(!visited[i][j]) {
			     breaker = true;
			     break;
		      }
	       }

	       if(breaker)
		      break;
        }


        DFS(i, j);
        for(i = 1; i < m + 1; i++) {
	       for(j = 1; j < n + 1; j++) {
		      if(!visited[i][j])
			     cout << '.';
		      else
			     cout << (char)visited[i][j];
	       }
	       cout << endl;
        }
        return 0;
}
