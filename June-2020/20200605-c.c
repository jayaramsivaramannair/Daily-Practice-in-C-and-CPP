#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b, c, s1, s2, s3;

    printf("Enter three integers to represent sides of a triangle:\n");
    scanf("%d %d %d", &s1, &s2, &s3);

    if ((s1 + s2 <= s3) || (s2 + s3 <= s1) ||(s3 + s1 <= s2))
    {
        printf("The sides do not form a triangle\n");
    } else 
    {
        if (s1 != s2 && s2 != s3 && s3 != s1)
        {
            printf("Scalene triangle\n");
        }

        if ((s1 == s2) && (s2 != s3))
        {
            printf("Isosceles triangle\n");
        }

        if ((s2 == s3) && (s3 != s1))
        {
            printf("Isosceles triangle\n");
        }

        if ((s1 == s3) && (s3 != s2))
        {
            printf("Isosceles triangle\n");
        }

        if (s1 == s2 && s2 == s3)
        {
            printf("Equilateral triangle\n");
        }

        a = (s1 * s1) == (s2 * s2) + (s3 * s3);
        b = (s2 * s2) == (s1 * s1) + (s3 * s3);
        c = (s3 * s3) == (s2 * s2) + (s1 * s1);

        if (a || b || c)
        {
            printf("Right-angled triangle\n");
        }
    }

    return 0;
}