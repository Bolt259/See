#include <stdio.h>

void main() {
    FILE *fptr;

// check FILEPATH TECHNIQUE
    fptr = fopen("justc.txt", "r");

    char data[100];

    if (fptr != NULL) {
        while (fgets(data, 100, fptr)) {
            printf("%s", data);
        }
    } else {
        printf("\nFile does not exist.");
    }

    fclose(fptr);
}
