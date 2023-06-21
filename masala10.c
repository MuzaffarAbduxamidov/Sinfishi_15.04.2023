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
        printf("Qator %d -> ", i+1);
        for(int j=0; j<n; j++){
            arr[i][j] = rand()%81+10;
            printf("%d ", arr[i][j]);
        }
    puts("");
    }


}
