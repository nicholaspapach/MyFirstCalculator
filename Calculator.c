#include <stdio.h>
#include <math.h>
#define PI 3.14, e = 2.71, g = 9.81
int main(void)
{
    int a,b,c,d,answer;

    printf("Welcome to the calculator!\n");
    printf("Please enter your choice:\n");
    scanf("%d", &answer);
    switch (answer) {
        case 1:
            printf("Welcome to Addition!\n");
        printf("Please enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        break;
        case 2:
            printf("Welcome to Subtraction!\n");
        printf("Please enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("%d\n", a-b);
        break;
        case 3:
            printf("Welcome to Multiplication!]n");
        printf("Please enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("%d\n", a*b);
        break;
        case 4:
            printf("Welcome to Division!\n");
        printf("Please enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("%d\n", a/b);
        break;
        case 5:
            printf("Welcome to Mod Division\n");
        printf("Please enter two numbers\n");
        scanf("%d %d", &c, &d);
        printf("%d\n", c%d);
        break;
        case 6:
            printf("Welcome to the Left bit Mover\n");
        printf("Please enter a number and the bits you want to move it to the left\n");
        scanf("%d %d",&a,&b);
        printf("%d\n", a <<= b);
        break;
        case 7:
            printf("Welcome to the Right bit Mover\n");
            printf("Please enter a number and the bits you want to move it to the right\n");
            scanf("%d %d",&a,&b);
            printf("%d\n", a >>= b);
        break;
        case 8:
            printf("Welcome to Exponation!\n");
            printf("Please enter a number and the exponent\n");
            scanf("%d %d",&a,&b);
            printf("%.2f\n", pow(a,b));
        break;
    }
    return 0;
}