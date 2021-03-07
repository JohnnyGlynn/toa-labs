#include <stdio.h>

void bin_print(unsigned int i){
    //# of bits in an INT
    int j = sizeof(unsigned int) * 8;

    int k;

    for (j-- ; j >= 0; j--)
    {
        //Explain this fella:
        /*Ternery Operator, Condition on the left, what do if true of false
        *Bitwise & and Left Bitshift
        *Equivalent to an if else
        * if 1 true but if 0 false, if 2/-1 also true
        * 
        */
        k = ((1 << j) & i) ? 1: 0;
        printf("%d", k);
    }
    
}

//Standard main signature, no vid
int main( int argc, char *argv[]){

    //sets I to a literal value,
    unsigned int i = 0xffffffff;
    //int i = 241;
    // int h = 0xF1; //11110001 binary equivalent of 241/0xF1

    // printf("Dec: %d\n", i);
    // printf("Hex: %x\n", i);

    // printf("Size of int : %d\n", sizeof(i));
    // printf("Size of char : %c\n", sizeof(char));


    // char c = 241;
    // printf("c in char is: %c\n", c);
    // printf("c in int is: %d\n", c); 


    // char j = 1000000000;
    // printf("j in char is: %c\n", j);
    // printf("j in int is: %d\n", j); 

    printf("Original: ");
    bin_print(i);
    printf("\n");

    for(int j = 0; j < 40; j++){
        //Bits move and the output is moved left, but the new bits at the leftmost are not the bits that have fallen off
        printf("%3d << %2d:", i, j);
        bin_print(i << j);
        printf("\n");
    }
    
    //return ok
    return 0;
}