#include <stdio.h>

void getSumDiff(int a, int b, int* pSum, int* pDiff){
    // TODO
    *pSum = a + b;
    *pDiff = a - b;
}

int main(void){
    int i;
    int j;
    int sum;
    int diff;
    scanf("%d%d", &i, &j);
    getSumDiff(i, j, &sum, &diff);
    printf("sum: %d\n", sum);
    printf("diff: %d\n", diff);
    return 0;
}//