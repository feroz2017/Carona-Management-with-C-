#include <stdio.h>
int main() {    

    printf("\nFrom (0,0) to (5,5)..........\n");
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            printf("(%d,%d) ",i,j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}