
#include <stdio.h>

int main(int argc, char** argv){
    printf("test\n");
    int c;
    if(argc > 1){
        printf("test(%d, %p, %p, %s)\n", argc, argv, argv[0], argv[0]);
        for(c = 1; c < argc; c++){
            printf("%p: %s\n", argv[c], argv[c]);
        }
    } else {
        printf("argc is %d.\n", argc);
    }
    return 0;
}
