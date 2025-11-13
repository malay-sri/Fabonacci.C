#include <stdio.h>

int fa(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fab(n-1)+fab(n-2);
    }
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
}
for( i = 0; i < num; i++)
{
    printf("%d",fab(i));
}
printf("\n");
return 0;