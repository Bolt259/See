# include <stdio.h>


void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void swapArr(int nums[], int size, int female, int male) {
    int temp = nums[female];
    nums[female] = nums[male];
    nums[male] = temp;
}

int main() {
    int size;
    int female, male;

    // get size
    printf("\nEnter the size of the array: \n");
    scanf("%d", &size);

    int nums[size];

    /*makes pointer called nums to first element in the allocated memory space
    malloc allocates memory for the pointer of a size equal to the size needed
    to store one integer (sizeof(int)) times the size of the requested array
    */
    int* nums = malloc(sizeof(int) * size);

    if (nums == NULL) {
        printf("Memory allocation failed, size too large.\n");
        return 1;
    }

    //get array
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++) {
        printf("\nElement %d: \n", i + 1);
        scanf("%d", nums[i]);
    }

    // get indicies to swap:
    printf("\nEnter the indicies of elements to swap: ");
    scanf("%d, %d", &female, &male);

    printf("\nArray before swapping:\n");
    for (int i = 0; i < size; i++) {
        printf("%d, ", nums[i]);
    }

    swapArr(nums, size, female, male);

    printf("\nArray after swapping:\n");
    for (int i = 0; i < size; i++) {
        printf("%d, ", nums[i]);
    }

    return 0;
}