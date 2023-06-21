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
            arr[i][j] = rand()%9+1;
            printf("%d ", arr[i][j]);
        }
    puts("");
    }
    puts("");

    int son1 = 0;
    int son11 = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                if(i == j){
                int sum = arr[i][j];
                arr[i][j] = arr[i][n-1-i];
                arr[i][n-1-i] = sum;
                }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
    puts("");
    }
}
