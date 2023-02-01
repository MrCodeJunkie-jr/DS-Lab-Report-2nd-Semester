#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char plaintext, int shift) {
    int length = strlen(plaintext);
    for (int i = 0; i < length; i++) {
        if (isalpha(plaintext[i])) {
            char c = plaintext[i];
            if (islower(c)) {
                c = (c - 'a' + shift) % 26 + 'a';
            } else {
                c = (c - 'A' + shift) % 26 + 'A';
            }
            plaintext[i] = c;
        }
    }
}

void decrypt(charencrypted_text, int shift) {
    int length = strlen(encrypted_text);
    for (int i = 0; i < length; i++) {
        if (isalpha(encrypted_text[i])) {
            char c = encrypted_text[i];
            if (islower(c)) {
                c = (c - 'a' - shift + 26) % 26 + 'a';
            } else {
                c = (c - 'A' - shift + 26) % 26 + 'A';
            }
            encrypted_text[i] = c;
        }
    }
}

int main() {
    char plain_text[] = "HELLO";
    int shift = 3;

    printf("Plain Text: %s\n", plain_text);
    encrypt(plain_text, shift);
    printf("Encrypted Text: %s\n", plain_text);
    decrypt(plain_text, shift);
    printf("Decrypted Text: %s\n", plain_text);

    return 0;
}
