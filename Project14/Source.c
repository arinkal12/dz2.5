#include <stdio.h>
int main() {
    int x, y, z;
    printf("enter x y z  ");
    scanf_s("%d %d %d", &x, &y, &z);
    if ((x > y) && (y > z)) {
        printf("\n %d %d %d", z, x, y);
    }
    else if ((y > x) && (x > z))
    {
        printf("\n %d %d %d", z, x, y);
    }
    else if ((x > z) && (z > y))
    {
        printf("\n %d %d %d", y, z, x);
    }
    else if ((y > z) && (z > x))
    {
        printf("\n %d %d %d", x, z, y);
    }
    else if ((z > x) && (x > y))
    {
        printf("\n %d %d %d", y, x, z);
    }
    else if ((z > y) && (y > x))
    {
        printf("\n %d %d %d", x, y, z);
    }

    return 0;
}