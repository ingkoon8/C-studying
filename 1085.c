#include<stdio.h>


int main() {

    int num1,num2,num3,num4;
    int dis[4] = {0,};
    int comP;
    scanf("%d %d %d %d", &num1,&num2,&num3,&num4);
    dis[0] = num1;
    dis[1] = num3 - num1; 
    dis[2] = num2;
    dis[3] = num4 - num2;

    for (int i; i<4; i++) {
        if (i==0)
            comP = dis[0];
        else
            if(dis[i] <= comP)
                comP = dis[i];              
    }

    printf("%d",comP);

    return 0;

}
