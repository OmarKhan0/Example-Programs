#include <stdio.h>
#include <string.h>

int main ()
{
#if 0
	FILE *fp = popen("pidof bash","r");
	if (!fp){
		printk("fp is NULL\n");
		return 0;
	}
#endif

	char *ptr = "My name is Omar\n";
	FILE * fp = fdopen(1, "w");
	if (!fp) {
		printf("fp is NULL\n");
		return 0;
	}

	fwrite (ptr, 1, strlen(ptr), fp);

	return 0;
} 
