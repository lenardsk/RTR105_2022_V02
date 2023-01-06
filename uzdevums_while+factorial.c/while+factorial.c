#include <stdio.h>
int main()
{
    int n,i,f;
    f=i=1;
    printf("Cienijamais lietotāj, lūdzu ievadiet skaitli, lai atrastu faktoriālu: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("Faktoriāls no %d ir : %d",n,f);
    return 0;
}
