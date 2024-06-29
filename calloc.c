#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int *arr = (int *)calloc(100, sizeof(int));
    if (arr == NULL) {
       
        printf("calloc failed");
        return 1;
    }

  
    // for (int i = 0; i < 100; i++) {
    //     arr[i] = i + 1;
    // }

  
    printf("The first 500 natural numbers are:\n");
    for (int i = 0; i < 100; i++) {
        arr[i] = i + 1;
        printf("%d\n ", arr[i]);
    }
    printf("\n");


    free(arr);

    return 0;
}
