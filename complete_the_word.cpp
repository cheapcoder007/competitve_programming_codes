#include <bits/stdc++.h>
using namespace std;

string str;
unsigned int i, j, l, len = 0, question = 0, k, tmp, flag; 
vector < int > visited(26, 0);
void evalute() {
        for(tmp = 0; tmp < i; tmp++)
	       cout << str[tmp];
        for(k = i; k <= j; k++) {
	       if(str[k] != '?')
		      cout << str[k];
	       else {
		      for(l = 0; l < 26; l++)
			     if(!visited[l] && question--) {
				    visited[l]++;
				    cout << (char)(l + 65);
				    break;
			     }
	       }
        }
        for(tmp = j + 1; tmp < str.size(); tmp++)
	       cout << str[tmp];
        cout << endl;
}

int main() {
        cin >> str;
        if(str.size() < 26) {
	       cout << "-1" << endl;
	       return 0;
        }
//        for(i = 0; i < str.size(); i++)
//	       cout << str[i] << " (" << i << ")";
        //cout << endl;
        for(i = 0; i < 26; i++) {
	       if(str[i] == '?') {
		      question++;
		      len++;
	       }
	       else if(!visited[str[i] - 65]){
		      visited[str[i] - 65]++;
		      len++;
	       }
	       else
		      visited[str[i] - 65]++;
        }
        if(len == 26) {
	       i = 0;
	       j = 25;
	       evalute();
	       return 0;
        }
        i = 1, j = 25;
        while(j++ < str.size()) {
		     
	       if(i) {
	       if(str[i - 1] == '?')
		      len--, question--;
	       else {
		      if(visited[str[i - 1] - 65] == 1)
			     len--;
		      if(visited[str[i - 1] - 65] > 0)
			     visited[str[i - 1] - 65]--;
	       }
	       }
	       if(len != 26) {
		      if(str[j] == '?') {
			     i++;
			     question++;
			     len++;
			     continue;
		      }
//		      visited[str[i - 1] - 65]--;
		      if(!visited[str[j] - 65]) {
			     visited[str[j] - 65]++;
			     len++;
		      }
		      else {
			     visited[str[j] - 65]++;
		      }

	       }
	       else  {
		      flag = 1;
		      break;
	       }
	       i++;
//	       cout << i << "= i j = " << j << " len = " << len << " question = " << question << endl;

        }
        if(!flag) {
	       i--;
	       j--;
        }
 //       cout << i << " " << j << " " << visited[0] << endl;


        if(len != 26) {
	       cout << "-1" << endl;
	       return 0;
        }
        evalute();
        return 0;
}
