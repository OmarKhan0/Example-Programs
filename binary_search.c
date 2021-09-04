#include <stdio.h>

int binsearch (int arr[], int len, int to_search)
{
	if (len <= 0 )
		return -1;
		
	int idx = (len - 1)/2 ;	
	
	if (arr[idx] == to_search)
		return idx;
	else if (arr[idx] > to_search)
		return binsearch (arr,idx, to_search);
	else
		return binsearch (arr + idx + 1,len - idx ,to_search);

}




int main ()
{

	int arr[] = {1,25,88,123,125,200,201}, rv;
	
	rv = binsearch(arr, 7, 88);
	if(rv==-1) {
		printf("item not in array\n");
		}
	else {
		printf("Item in Array\n");
		}

}	
