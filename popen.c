#include <stdio.h>
#include <string.h>

int main ()
{
	char pidline[1024];
	FILE *fp = popen("pidof bash","r");
	if (!fp){
		printf("fp is NULL\n");
		return 0;
}

	fgets(pidline,1024,fp);

        printf("%s",pidline);

	return 0;
}
