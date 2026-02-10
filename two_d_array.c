#include <stdio.h>

int main() {
    int a[100][100],i,j,n,m;
    printf("Enter row size & column size");
    scanf("%d%d",&m,&n);// Write C code here
    printf("Enter matrix size");
    for(i=0;i<m;i++)
    {
        for(j=0;i<<n;j++)
        {
            printf("%d",&a[i][j]);
        }
    }

    return 0;
}
