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
       //gets the Jth bit of I
        k = ((1 << j) & i) ? 1: 0;
        printf("%d", k);
    }
    
}

//Standard main signature, no vid
int main( int argc, char *argv[]){

    //sets I to a literal value,
    unsigned int i = 0x0f0f0f0f;

    printf("Original: ");
    bin_print(i);
    printf("\t%x\t%u\n\n", i,i);

    for(int j = 0; j < (sizeof(int) * 8); j++){
        //Bits move and the output is moved left, but the new bits at the leftmost are not the bits that have fallen off
        //1 shifted left j times
        bin_print(1 << j);
        printf("\n");
        //i.
        bin_print(i);
        printf("\n");
        printf("------------------------------ &\n");
        // 1 shifted left j times and i
        bin_print(((1 << j) & i));
        printf("\n\n");

        // printf("(1 << %3u) & %08x: ", j, i);
        // bin_print(((1 << j)));
        // printf("\n");
    }
    
    //return ok
    return 0;
}