#include <stdio.h>
#include <string.h>

void check_flag(char *input) {
    char correct_flag[] = "CTF{Reversing_101}";
    
    if (strcmp(input, correct_flag) == 0) {
        printf("Correct! The flag is: %s\n", correct_flag);
    } else {
        printf("Wrong flag! Try again.\n");
    }
}

int main() {
    char user_input[50];
    
    printf("Enter the flag: ");
    scanf("%49s", user_input);
    
    check_flag(user_input);
    
    return 0;
}
