#include <stdio.h>

int binsearch (int arr[], int len, int to_search)
{
	int temp;
	if (len <= 0 )  
 		return -1;
		
	int idx = (len - 1)/2 ;	
	
	if (arr[idx] == to_search)  
		return idx; 	
	else if (arr[idx] > to_search) 
		return  binsearch (arr,idx, to_search);
	else {
		temp = binsearch (arr + idx + 1,len - idx ,to_search);
		if (temp == -1)
			return -1;
		else 
		return idx + 1 + temp;
	}


}


int main ()
{

	int arr[] = {1,25,88,123,125,200,201,440,500,600,720}, rv;
	
	rv = binsearch(arr, 11, 1);
	
	if(rv==-1) {
		printf("item not in array\n");
		}
	else {
		printf("Item in Array: idx =  %d\n",rv);
		}

}	
