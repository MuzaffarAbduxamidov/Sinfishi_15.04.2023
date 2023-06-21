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
            arr[i][j] = rand()%90+10;
            printf("%d ", arr[i][j]);
        }
    puts("");
    }
    puts("");

    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            int s = arr[i][j];
            arr[i][j] = arr[n-1-i][j];
            arr[n-1-i][j] = s;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
    puts("");
    }
}
