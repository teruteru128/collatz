
#include <stdio.h>

int main(int argc, char** argv){
    printf("test\n");
    if(argc > 1){
        printf("test(%d, %p, %s)\n", argc, argv, argv[0]);
    } else {
        printf("argc is %d.\n", argc);
    }
    return 0;
}
