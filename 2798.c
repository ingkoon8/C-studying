#include <stdio.h>
#include <stdlib.h>

int main() {
    int M, q, N,cmp2, N2;
    int cmp1 = -1;
    scanf("%d %d", &q, &M);
    int *numPtr = malloc(sizeof(int)*q);
    for(int i = 0; i < q; i++)
        scanf("%d", &numPtr[i]);
    for(int i = 0; i < q; i++) {
        for(int j = i+1; j < q; j++) {
            for(int k = j+1; k < q; k++){
                N = numPtr[i]+numPtr[j]+numPtr[k];
                if(cmp1==-1 && N <= M)
                    cmp1 = M-N;
                else {
                    cmp2 = M-N;
                    if (cmp2 >= 0 && cmp2 <= cmp1){
                        cmp1 = cmp2;
                        N2 = N;
                    }
                }
            }
        }
    }
    printf("%d", N2);
    free(numPtr);
    return 0;
}
