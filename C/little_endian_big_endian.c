//How to find if your system is Little Endian or Big Endian
/*
Little Endian means that the binary value is stored in 
reverse order in the RAM, from biggest to smallest.
While in Big Endian, the value is stored in
it's correct binary order from left ot right.

When dereferening (*c), it will take first byte
out of those four bytes in the case of an integer. That's why
we usually get,
Zero in case of Big Endian 
One in case of Little Endiam
*/

#include <stdio.h>

int main()
{   
    unsigned int i = 1;
    char* c = (char*)&i; //pointer which points to one byte memory at a time.
    if(*c)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");
    return 0;
}
