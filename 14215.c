#include <stdio.h>

int main() {

    int side1, side2,side3;
    int k = 0;
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 + side2 <= side3) 
        side3 = side1 + side2 - 1;
    else if (side1 + side3 <= side2)
        side2 = side1 + side3 - 1;
    else if (side2 + side3 <= side1) 
        side1 = side2 + side3 - 1;
    k = side1 + side2 + side3;
    printf("%d",k);
    return 0;
}
