#include <iostream>
#include<string>
using namespace std;

//Prototypes

string encryption(string plainText, string key);

string decryption(string cypherText, string key);

int main() {


    string plainText;
    string cypherText;
    string key;
    int choice;
    char toContinue='y';


    do {

        system("cls");
        printf("1: Encryption\t\t");
        printf("2: Decryption\t\t");
        printf("3: Exit\t\t");

        cout << "\n\nEnter your choice\n";

        cin >> choice;

        //input validation
        
        while (choice <= 0 || choice > 3) {
            printf("\nInvalid input...Enter Again\n");
            cin >> choice;
        }
        //switch statements
        switch (choice) {
        case 1:
                printf("\nEnter the plainText you want to encrypt\n");
                cin >> plainText;
                printf("\nEnter the key with you want to encrypt your data\n");
                cin >> key;
                cypherText = encryption(plainText, key);
                cout << "\nYour encrypted text is: " << cypherText;
                printf("\nWould you like to continue: (Y\\N)");
                cin >> toContinue;
                break;

        case 2:
            printf("\nEnter the Encrypted data you want to decrypt\n");
            cin >> cypherText;
            printf("\nEnter the key with you want to decrypt your data\n");
            cin >> key;
            plainText = decryption(cypherText, key);
            cout << "\nYour decrypted text is: " << plainText;
            printf("\nWould you like to continue: Y\\N");
            cin >> toContinue;
            break;

        case 3:
            toContinue = 'n';
            break;
        }

    } while(toContinue == 'y' || toContinue == 'Y');

    return 0;
}