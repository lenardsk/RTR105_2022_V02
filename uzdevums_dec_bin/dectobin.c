 #include<stdio.h>
 #include<stdlib.h>
    int main(){
    int a[10],n,i;
    system ("cls");
    printf("Cienijamais lietotāj ,ievadiet decimālskaitli: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
    a[i]=n%2;
    n=n/2;
    }
    printf("\nBinārais rezultāts=");
    for(i=i-1;i>=0;i--)
    {
    printf("%d",a[i]);
    }
    return 0;
    }
