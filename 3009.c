#include<stdio.h>


int main() {

    int numArr[2];
    int a,b,c,d;
    int cnt1, cnt2, cnt3, cnt4;

    for (int i=0;i<3;i++) {
        scanf("%d %d", &numArr[0], &numArr[1]);
        if (i == 0) {
            a=numArr[0];
            c=numArr[1];
            cnt1=1, cnt2=0,cnt3=1,cnt4=0;
        }
        else {
            if (a!=numArr[0]) {
                b=numArr[0];
                cnt2++;
            }
            else 
                cnt1++;

            if (c != numArr[1]) {
                d = numArr[1];
                cnt4++;
            }
            else
                cnt3++;
        }
    }

    numArr[0] = cnt1 < cnt2 ? a : b;
    numArr[1] = cnt3 < cnt4 ? c : d;
    printf("%d %d", numArr[0],numArr[1]); 

    return 0;

}
