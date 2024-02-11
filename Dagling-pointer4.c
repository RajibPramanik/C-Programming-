#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    int a = 5;
    *ptr = a;
    printf("Value hold by ptr: %d\n", *ptr);
    printf("Address hold by ptr: %p\n", (void *)ptr);
    free(ptr);
    ptr = NULL;
    printf("After Address hold by ptr : %p\n", (void *)ptr);

    return 0;
}
