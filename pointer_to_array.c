#include <stdio.h>

int main()
{
	char * arr[5] = {"1","2","3","4","5"};
	
	char * (*haider) [5] = &arr;
	
	//int * ptr = arr; 
    
    	printf("haider = %p, : *haider = %p, *haider[3]  = %s\n",haider,*haider,(*haider)[3]);
    
       printf("hello\n");
    
    
    
    //haider[2] = &b;
    
    //haider(10);

    return 0;
}

