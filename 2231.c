#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main() {
    char s1[10];
    scanf("%s",s1);
    int *s2 = malloc(sizeof(int)*10);
    int len = strlen(s1);
    int num = atoi(s1);
    int num2 = num - len*9;
    int com=0;
    int pall=0;
    char s3[10];
    
    while(num2<num) {
        sprintf(s3,"%d",num2);
        len = strlen(s3);
        for(int i =0;i<len;i++) {
            s2[i] = atoi(&s3[i]);
            s2[i] = s2[i]/(pow(10,((len-1)-i)));
            com += s2[i];
        }
        if((num2+com) == num) {
            pall = num2;
            break;
        }
        com=0;   
        num2++;
    }
    printf("%d",pall);

    free(s2);
    return 0;
    
}
