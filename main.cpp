#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random string of specified length containing only alphanumeric characters
string generateUsername(int length) {
    const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // Characters to choose from
    string result;
    int charsetLen = charset.length();

    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetLen;
        result += charset[index];
    }

    return result;
}

// Function to generate a strong password with special characters
string generatePassword(int length) {
    const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{};:'\",.<>/?"; // Characters to choose from including special characters
    string result;
    int charsetLen = charset.length();

    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetLen;
        result += charset[index];
    }

    return result;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed for randomization based on current time

    // Generate username
    cout << "Generating Username..." << endl;
    string username = generateUsername(8); // Generates an 8-character username using only alphanumeric characters
    cout << "Generated Username: " << username << endl;

    // Generate password
    cout << "\nGenerating Password..." << endl;
    string password = generatePassword(12); // Generates a 12-character password including special characters
    cout << "Generated Password: " << password << endl;

    return 0;
}
