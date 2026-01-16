#include <stdio.h>
#include <stdint.h> 

int main(void) {

    //reading the binary file
    FILE *f = fopen("single_register_mov", "rb");

    if (!f)
    {
        printf("Error: could not open file. \n");
        return 1;
    }

    //imported from library to ensure we have an unsigned 8 bit (1 byte) integer.
    uint8_t buffer[2];
    
    //read 1 byte, 2 times, into buffer
    fread(buffer, 1, 2, f);

    printf("Byte 1: %x\n", buffer[0]);
    printf("Byte 2: %x\n", buffer[1]);
    
    // ... logic continues ...
    fclose(f);
    return 0;


}
