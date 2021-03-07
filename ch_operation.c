#include <stdio.h>
// #include <stdint.h>
#include <inttypes.h>

#define WORD uint32_t
int Ch(uint32_t x,uint32_t y,uint32_t z){
    //x y and z 32 bit words
    //int not reliable here
    return (x&y)^(~x&z);
}

//Standard main signature, no vid
int main( int argc, char *argv[]){

    uint32_t x = 0xf0f0f0f0;
    uint32_t y = 0x0f0f0f0f;
    uint32_t z = 0xf0f0f0f0;

    uint32_t answer = Ch(x, y, z);
    printf("CH(%"PRIu32",%"PRIu32",%"PRIu32")=%" PRIu32 "\n", x, y, z, answer);

    return 0;
}