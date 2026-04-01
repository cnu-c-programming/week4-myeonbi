#include <stdio.h>

void swap_endian(int *x) {
    unsigned char* addr = (unsigned char*)x;
    unsigned char temp;    
    for (int i = 0; i < 2; i++) {
          temp = addr[i];
          addr[i] = addr[3 - i];
          addr[3 - i] = temp;
    }
}

int main() {
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}
