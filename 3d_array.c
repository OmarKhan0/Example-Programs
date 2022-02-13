#include <stdio.h>

int main()
{
    
    unsigned char message[2][10][70];
    
    
    
    printf("message = %lu, message[0][1],= %lu, message[1] = %lu\n",message,message[0][1],message[1]);
    printf("message[1][2][3] = %lu\n",&message[1][2][3]);
    printf("message[1][2][3] = %lu\n",message[1][2][3]);

    return 0;
}
