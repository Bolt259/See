# include <stdio.h>


// function returns address of local variable [-Wreturn-local-addr]
//
// This is when you use malloc ^^
//
// int* generateArray() {
//     int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     return array;
// }
//
// malloc way:
int* generateArray(int size) {
    int* array = malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }
    return array;
}

int main() {
    printf("This is main: \n");
    int size  = 10;
    int cnt = size;

    int* array = generateArray(size);

    for(int i = 0; i < cnt; i++) {
        printf("%i \n", array[i]);
    }

    free(array);

    return 0;
}

// other functionality:
//
// int main() {
//     printf("This is main2: \n");
//     int cnt = 0;
//     int size = 10;

//     // creates pointer to memory space allocated
//     int* array = malloc(sizeof(int) * size);

//     if (array == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     size *= 2;

//     // increases size of original memory space allocated realloc(ptr to some area of memory, new size)
//     int* array2 = realloc(array, sizeof(int) * size);

//     if (array2 == NULL) {
//         printf("New memory allocation failed...\n");
//         return 1;
//     } else {
//         array = array2;
//     }

//     for (int i = 0; i < size; i ++) {
//         array[i] = i;
//         cnt ++;
//     }

//     for (int i = 0; i < cnt; i++) {
//         printf("%i ", array[i]);
//     }

//     printf("\n");

//     // release memory when done
//     free(array);

//     return 0;
// }
