#include <stdio.h>
#include <ctype.h>

int main() {
    char chars[] = { 'A', 'z', '5', '!' };
    int n = sizeof(chars) / sizeof(chars[0]);

    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        printf("%c - alpha:%d digit:%d upper:%c lower:%c\n", 
            ch, 
            isalpha(ch), 
            isdigit(ch), 
            isupper(ch), 
            islower(ch));
    }
    return 0;
}
