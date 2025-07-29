#include "sha256.c"

int main() {
    char hash[100];
    int status = SHA256("hello",hash);
    printf("%d %s",status,hash);
    return 0;
}
