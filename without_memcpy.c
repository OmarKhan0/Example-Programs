#include <stdio.h>
#include <stdlib.h>
struct test 
{
    int arr[10];
};


int main()
{
    int arr[10] = {1,2,4,5,6,6};
    
    struct test * ptr = malloc(sizeof(struct test));
    
    struct test *ptr_1 = (struct test *) arr;
    
    *ptr = *ptr_1;

    printf("Hello World %d\n",*(((int *)ptr)+ 1));

    return 0;
}
