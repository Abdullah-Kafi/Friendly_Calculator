#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, n;
    long long int count;
    printf("***Welcome To Friendly Calculator***\nHere, You Can Do 4 Arithmetic Operations.\nWhat Do You Want To Do?\n1. Addition?\n2. Subtraction?\n3. Multiplication?\n4. Division?\nEnter Respective Number: ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("How Many Numbers Do You Want To Sum? Enter The Amount: ");
        scanf("%d", &n);
        count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                printf("Enter %dst Number: ", i);
            }
            else if (i == 2)
            {
                printf("Enter %dnd Number: ", i);
            }
            else if (i == 3)
            {
                printf("Enter %drd Number: ", i);
            }
            else
            {
                printf("Enter %dth Number: ", i);
            }
            scanf("%d", &b);
            count += b;
        }
        printf("Summation is: %lld", count);
    }
    else if (a == 2)
    {
        printf("Enter 1st Number: ");
        scanf("%d", &a);
        printf("Enter 2nd Number: ");
        scanf("%d", &b);
        printf("Difference is: %d\n", a - b);
    }
    else if (a == 3)
    {
        printf("How Many Numbers Do You Want To Multiply? Enter The Amount: ");
        scanf("%d", &n);
        count = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                printf("Enter %dst Number: ", i);
            }
            else if (i == 2)
            {
                printf("Enter %dnd Number: ", i);
            }
            else if (i == 3)
            {
                printf("Enter %drd Number: ", i);
            }
            else
            {
                printf("Enter %dth Number: ", i);
            }
            scanf("%d", &b);
            count *= b;
        }
        printf("Product is: %lld", count);
    }
    else
    {
        printf("Enter Dividend: ");
        scanf("%d", &a);
        printf("Enter Divisor: ");
        scanf("%d", &b);
        printf("Quotient is: %.2f", (float)a / b);
    }
    return 0;
}