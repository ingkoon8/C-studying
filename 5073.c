#include <stdio.h>

int main() {

    int side1, side2,side3;
    char* save[100];
    int k = 0;
    while(1) {
        scanf("%d %d %d", &side1, &side2, &side3);
        if(side1 == 0 && side2 == 0 && side3 == 0)
            break;
        if(side1 == side2 && side1 == side3 && side2 == side3) 
            save[k] = "Equilateral";
        else if(side1+side2 <= side3 || side1+side3 <= side2 || side2+side3 <= side1)
            save[k] = "Invalid";
        else if(side1 == side2 || side2 == side3 || side3 == side1)
            save[k] = "Isosceles";
        else if(side1 != side2 && side2 != side3 && side3 != side1)
            save[k] = "Scalene";   
        k++;
   }

    for(int i = 0; i <k; i++)
        printf("%s\n",save[i]);

    return 0;
}
