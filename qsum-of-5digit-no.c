#include <stdio.h>
int main()
{
    int n;
    // printf("Enter a 5 digit number\n");
    scanf("%d",&n);
    int ld=0;
    int sum = 0;

    while (n>0)
    {ld = n%10;
        n = n/10;
        
        sum = sum + ld;
    }
    
   
    printf("%d ",sum);
    return 0;
}