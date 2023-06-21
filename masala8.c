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

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+j)%2 == 0){
                printf("* ");
            }else{
                printf("%d ", arr[i][j]);
            }
        }
    puts("");
    }
}
