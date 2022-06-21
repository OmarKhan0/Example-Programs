#include <stdio.h>
#include <unistd.h>

int main()
{
    static int x = 0;
    fork(); /*vfork() will share address space, but read about this carefully before using*/
    x++;
    printf("Hello World %d, %d\n",getpid(),x);
    return 0;
}
