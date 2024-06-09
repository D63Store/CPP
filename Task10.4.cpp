#include <stdio.h>

void print_string(const char *str) {

    while (*str != '\0') {
        putchar(*str); 
        str++; 
    }
}

int main() {
    const char *test_string = "Hello, world!";
    
    print_string(test_string);
    
}
