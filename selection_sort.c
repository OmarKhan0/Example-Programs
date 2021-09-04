#include <stdio.h>

void selection_sort (int arr[], int arr_count)
{
	int min_idx, temp;

	for (int i = 0; i < arr_count - 1 ; i++) {
	
		min_idx = i;
		
		for (int j = i + 1; j < arr_count; j++) {
		
			if ( arr[min_idx] > arr[j])
				min_idx = j;
		
		
		}
	
		temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
	
	}



}

int main ()
{

	int arr[] = {5,3,9,88,2,7,1,3,2};
	
	selection_sort(arr, 9);

	for (int i = 0; i < 9 ; i++)
		printf("%d\n",arr[i]);


	return 0;

}
