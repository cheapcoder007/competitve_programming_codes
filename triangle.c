#include <stdlib.h>
#include <stdio.h>

void herons(int a, int x, int y, int z);
void check(double d, int x, int y, int z);
int v = 0, c = 0;

int main() {

        int w, x, y, z;

        scanf("%d%d%d%d", &w, &x, &y, &z);

        herons(w, x, y, z);

}


void herons(int w, int x, int y, int z) {

        double p, s;

        p = (double ) (x + y + z) / 2;
        s = p * (p - x) * (p - y) * (p - z);
        check(s, x, y, z);
        
        p = (double ) (w + y + z) / 2;
        s = p * (p - w) * (p - y) * (p - z);
        check(s, w, y, z);

        p = (double ) (x + w + z) / 2;
        s = p * (p - x) * (p - w) * (p - z);
        check(s, x, w, z);
        
        p = (double ) (x + y + w) / 2;
        s = p * (p - x) * (p - y) * (p - w);
        check(s, x, y, w);

        if(c) 
	       return ;
        if(v)
	       printf("SEGMENT\n");
        else
	       printf("IMPOSSIBLE\n");

}
          

void check(double s, int x, int y, int z) {

        if(s > 0) {
	       if(!c) {
	       printf("TRIANGLE\n");
	       c = 1;
	       }
        }
        else if(s == 0) {
	       v = 1;
        }
        else
	       return ;
}
