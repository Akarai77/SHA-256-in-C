#include "sha256.h"
#include <stdio.h>

int main() {
    char hash[100];
    int status = SHA256("hello",hash);
    if(status != 0)
        perror("Error while hashing!");
    printf("%s",hash);
    return 0;
}
