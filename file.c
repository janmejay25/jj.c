#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int countVowels(const char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    FILE *file;
    char filename[100];
    char str[1000];
    int vowelCount;


    file = fopen("newtxt.txt", "r");

    if (fgets(str, sizeof(str), file) == NULL) {
        fclose(file);
        return EXIT_FAILURE;
    }
    fclose(file);


    vowelCount = countVowels(str);
    file = fopen("newtxt.txt", "w");
    fprintf(file, "Number of vowels: %d\n", vowelCount);
    fclose(file);

    printf("The file has been updated with the number of vowels: %d\n", vowelCount);

    return 0;
}
