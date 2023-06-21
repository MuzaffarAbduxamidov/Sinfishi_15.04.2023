#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int n;
    printf("Son kiriting:");
    scanf("%d", &n);
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j] = rand()%2+0;
            printf("%d ", arr[i][j]);
        }
    puts("");
    }

    int nol = 0;
    int sum = 0;
    int son = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(nol == arr[i][j]){
                sum ++;
            }else{
                son ++;
            }
        }
    }

    if(sum>son){
        printf("Sparse matrix");
    }else{
        printf("Not sparse matrix");
    }
}
