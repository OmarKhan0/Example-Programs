#include <stdio.h>
#include <unistd.h>

int main()
{
    static int x = 0;
    fork();
    x++;
    printf("Hello World %d, %d\n",getpid(),x);
    return 0;
}
