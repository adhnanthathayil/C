#include <stdio.h>

int main(){
    int a[100][100],i,j,m,n;

    printf("Enter row size & column size:");
    scanf("%d%d",&m,&n);

    printf("Enter matrix elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
