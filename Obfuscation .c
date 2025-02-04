#include <stdio.h>
#include <string.h>

void decrypt_flag() {
    char encoded_flag[] = {88, 90, 65, 85, 91, 92, 65, 77, 82, 65, 82, 73, 78, 71, 65, 95, 49, 48, 49, 0}; 
    char key = 5;

    printf("Deciphering flag...\n");
    for (int i = 0; i < strlen(encoded_flag); i++) {
        encoded_flag[i] ^= key;
    }
    
    printf("Flag: %s\n", encoded_flag);
}

int main() {
    decrypt_flag();
    return 0;
}
