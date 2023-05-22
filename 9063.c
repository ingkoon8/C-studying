#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int field1[2] = {0,};
    int field2[2] = {0,};
    scanf("%d", &num1);
    for(int i=0; i<num1; i++) {
        scanf("%d %d", &num2, &num3);
        if(i==0) {
            field1[0] = num2;
            field1[1] = num3;
            field2[0] = num2;
            field2[1] = num3;
        }
        else {
            if(field1[0]<=num2)
                field1[0] = num2;
            if(field1[1]<=num3)
                field1[1] = num3;
            if(field2[0]>=num2)
                field2[0] = num2;
            if(field2[1] >= num3)
            field2[1] = num3;
        }
    }
    printf("%d",(field1[0]-field2[0])*(field1[1]-field2[1]));


    return 0;
}
