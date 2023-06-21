#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int son;
    printf("Son kiriting:");
    scanf("%d", &son);

    int arr[son][son];

    for(int i=0; i<son; i++){
        printf("Qator %d -> ", i+1);
        for(int j=0; j<son; j++){
            arr[i][j] = rand()%9+1;
            printf("%d ", arr[i][j]);
        }
    puts("");
    }
    puts("");

    for(int i=0; i<son; i++){
        printf("Qator %d -> ", i+1);
        for(int j=0; j<son; j++){
            if( i==0 || j==0 || i==son-1 || j==son-1 ){
                printf("%d ", arr[i][j]);
            }else{
                printf("* ");
            }
        }
    puts("");
    }
}

