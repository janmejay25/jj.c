#include <stdio.h>

int main() {
    char alphabet[26];
    char *ptr = alphabet;

    
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'a' + i;
    }

   
    printf("English alphabet:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }
    printf("\n");
    return 0;
}