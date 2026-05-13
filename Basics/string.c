#include <stdio.h>
#include <string.h>

int main(){

    char noun[50] = "";
    char adj[50] = "";
    char adj1[50] = "";
    char verb[50] = "";
    char adj2[50] = "";

    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective(description): ");
    fgets(adj, sizeof(adj), stdin);
    adj[strlen(adj) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';


    printf("Enter a verb: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';


    printf("Enter an adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = '\0';


    printf("\nMy country is %s\n", noun);
    printf("It is not a %s place to live.\n", adj);
    printf("Her government and its agencies are %s.\n", adj1);
    printf("My wish is to %s,\n", verb);
    printf("but I am %s.\n", adj2);



    return 0;
}