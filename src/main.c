
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "collatz.h"

int main(int argc, char** argv){
    int n;
    char* instr;
    size_t length;
    size_t i;
    int flg = 1;
    int count;

    if(argc != 2){
        printf("[USEAGE] %s numeric...\n", argv[0]);
        exit(1);
    }
    instr = argv[1];

    length = strlen(instr);
    for(i = 0; flg && i < length;i++){
        flg &= isdigit(instr[i]) ? 1 : 0;
    }

    if(!flg){
        printf("%s contains non-numeric characters!\n", instr);
        exit(1);
    }

    n = atoi(instr);
    count = collatz(n);
    printf("%d\n", count);

    return 0;
}
