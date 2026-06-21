#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char name[50];
    char number[12];
}Contact;

void addContact(Contact contacts[], int *totalContact);
void viewContact(Contact contacts[], int totalContact);
int searchContact(Contact contacts[], int totalContact);
int deleteContact(Contact contacts[], int *totalContact);

int main(){
    int options;

    int totalContacts = 0;
    Contact contacts[100]; 

    printf("*** CONTACT LIST ***\n");
    
    do{
        printf("\n1. Add contact\n");
        printf("2. View contact\n");
        printf("3. Search contact\n");
        printf("4. Delete contact\n");
        printf("5. Exit\n");

        printf("\nEnter option: ");
        scanf("%d", &options);
        getchar();

        switch(options){
            case 1:
                addContact(contacts, &totalContacts);
                break;
            case 2:
                viewContact(contacts, totalContacts);
                break;
            case 3:
                searchContact(contacts, totalContacts);
                break;
            case 4:
                deleteContact(contacts, &totalContacts);
                break;
            case 5:
                printf("Goodbye!!");
                break;
            default:
                printf("Invalid option");
                break;
        }

    }while(options != 5);

    return 0;
}

void addContact(Contact contacts[], int *totalContact){
    int i = *totalContact;
    
    printf("Enter name: ");
    fgets(contacts[i].name, sizeof(contacts[i].name), stdin);
    contacts[i].name[strlen(contacts[i].name) - 1] = '\0';
    
    printf("Enter number: ");
    fgets(contacts[i].number, sizeof(contacts[i].number), stdin);
    contacts[i].number[strlen(contacts[i].number) - 1] = '\0';
    
    (*totalContact)++;
}

void viewContact(Contact contacts[], int totalContact){

    for(int i = 0; i < totalContact; i++){
        printf("Name: %s\n", contacts[i].name);
        printf("Number: %s\n", contacts[i].number);

        printf("\n");
    }
}
int searchContact(Contact contacts[], int totalContact){
    char name[50];
    int found = 0;

    printf("Enter name to search: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    for(int i = 0; name[i] != '\0'; i++){
        name[i] = toupper(name[i]);
    }

    for(int i = 0; i < totalContact; i++){
        char temp[50];
        strcpy(temp, contacts[i].name);

        for(int j = 0; temp[j] != '\0'; j++){
            temp[j] = toupper(temp[j]);
        }

        if(strcmp(temp, name) == 0){
            printf("Found:\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Contact: %s\n", contacts[i].number);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("Contact not found!");
    }
}

int deleteContact(Contact contacts[], int *totalContact){
    char name[50];
    int found = 0;

    printf("Enter name to delete: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    for(int i = 0; name[i] != '\0'; i++){
        name[i] = toupper(name[i]);
    }

    for(int i = 0; i < *totalContact; i++){
        char temp[50];
        strcpy(temp, contacts[i].name);

        for(int j = 0; temp[j] != '\0'; j++){
            temp[j] = toupper(temp[j]);
        }

        if(strcmp(temp, name) == 0){

            for(int j = i; j < *totalContact - 1; j++){
                contacts[j] = contacts[j + 1];
            }

            (*totalContact)--;
            found = 1;
            printf("Contact successfully deleted!\n");
            break;
        }
    }

    if(!found){
        printf("Contact not found!");
    }
}