#include <stdio.h>
// WAP TO PRITN GRADES WITH ELSE IF //
int main()
{
    float grade;

    printf("ENTER THE GRADE OUT OF 100 : \n");
    scanf("%f", &grade);

    if (grade > 95)
    {
        printf("STUDENT GOT A+ GRADE\n");
    }
    else if (grade > 90)
    {
        printf("STUDENT GOT A GRADE\n");
    }
    else if (grade > 80)
    {
        printf("STUDENT GOT B GRADE\n");
    }
    else if (grade > 70)
    {
        printf("STUDENT GOT C GRADE\n");
    }
    else if (grade > 60)
    {
        printf("STUDENT GOT D GRADE\n");
    }
    else
    {
        printf("STUDENT GOT FAILED\n");
    }

    return 0;
}