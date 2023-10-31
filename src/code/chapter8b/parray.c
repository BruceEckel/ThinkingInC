/* parray.c: Illustrates arrays & pointers */
#include <stdio.h>

int min(int* nums, int size) { // or int nums[]

    int* end = nums + size;	 // past the end
    int small = *nums;
    printf("sizeof nums == %u\n", sizeof nums);
    
    while (++nums < end)
        if (*nums < small)
            small = *nums;
    return small;
}

int main() {
    int a[] = {56,34,89,12,9};
    printf("%d\n", min(a, 5));	// 9
    printf("sizeof a == %u\n", sizeof a);
    return 0;
}
