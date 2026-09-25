// WAP TO PRINT THE AP 1,3,5,7.......... UPTO N TERMS AND TAKE USER INPUT //
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF TERMS : \n");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        printf("THE AP TILL %d IS : %d \n", n, i);
    }
    return 0;
}
