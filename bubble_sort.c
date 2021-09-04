#include <stdio.h>

void bubblesort (int arr[], int len)
{
	int temp;
	for(int i=0; i<len - 1; i++) {

		for (int j=0; j<len-i-1; j++) {

			if( arr[j] > arr[j+1] ) {
				
				temp=arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}

	}
}

int main ()
{

	int arr[] = {5,9,8,2,2};
	int n=5;
	
	bubblesort(arr, n);
	
	printf("Printing the sorted array:\n");
  		for (int i = 0; i < n; i++)
			{
     			printf("%d\n", arr[i]);
     			}
  		return 0;	

}	
