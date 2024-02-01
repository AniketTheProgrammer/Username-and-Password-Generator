#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function to generate a random string of specified length containing only alphanumeric characters
void generateUsername(char *str, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // Characters to choose from
    int charsetLen = strlen(charset);

    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetLen;
        str[i] = charset[index];
    }

    str[length] = '\0';
}

// Function to generate a strong password with special characters
void generatePassword(char *str, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{};:'\",.<>/?"; // Characters to choose from including special characters
    int charsetLen = strlen(charset);

    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetLen;
        str[i] = charset[index];
    }

    str[length] = '\0';
}

int main() {
    char username[9]; // Change the size as per requirement for 8 characters + null terminator
    char password[13]; // Change the size as per requirement for 12 characters + null terminator

    srand(time(NULL)); // Seed for randomization based on current time

    // Generate username
    printf("Generating Username...\n");
    generateUsername(username, 8); // Generates an 8-character username using only alphanumeric characters
    printf("Generated Username: %s\n", username);

    // Generate password
    printf("\nGenerating Password...\n");
    generatePassword(password, 12); // Generates a 12-character password including special characters
    printf("Generated Password: %s\n", password);

    return 0;
}
