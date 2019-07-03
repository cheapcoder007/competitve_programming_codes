/*
0->0,8
1->0,1,3,4,7,8,9
2->8,2
3->3,8,9
4->8,4,9
5->5,6,8,9
6->6, 8
7->3,7,8,9,0
8->8
9->8,9

*/



#include <stdio.h>
int main() {

        int n, result, l, arr[] = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};

        scanf("%d", &n);

        l = n % 10;
        n = n / 10;
        result = arr[n] * arr[l];

        printf("%d\n", result);

}
