# include<stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum of %d and %d = %d ", sum, a, b);
    return 0;
}