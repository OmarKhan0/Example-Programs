#include <stdio.h>

void insertion_sort (int arr_count, int* arr) 
{
     int tmp, tmp_key = 1;
     
    for (int key = 1; key < arr_count ;) {
        tmp = arr[key];
        while (tmp_key && (arr[tmp_key - 1] > tmp)) {
                arr[tmp_key] = arr[tmp_key - 1];
            
            tmp_key--;
        }
        arr[tmp_key] = tmp;
        tmp_key = ++key;
        
    }
}
int main()
{
    int arr[] = {7,4,9,6,6,9,1};
    insertion_sort(7,arr);
    for(int i =0 ; i < 7; i++ )
        printf("%d\n",arr[i]);
    printf("Hello World");

    return 0;
}
