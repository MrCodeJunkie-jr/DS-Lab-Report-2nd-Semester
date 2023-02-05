#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char c, cipher, dec;
    int key;
    printf("\nEnter a character: ");
    scanf("%c", &c);
    printf("Enter the key: ");
    scanf("%d", &key);
    if(islower(c)){
        cipher = (((c - 'a') + key) % 26) + 'a';
        dec = (((cipher - 'a') - key + 26) % 26) + 'a';
    }
    else if(isupper(c)){
        cipher = (((c - 'A') + key) % 26) + 'A';
        dec = (((cipher - 'A') - key + 26) % 26) + 'A';
    }
    else{
        printf("Not an alphabet");
        exit(0);
    }
    printf("\nEncryption = %c\nDecryption = %c", cipher, dec);
return 0;
}
