#include <stdio.h>
#include <string.h>

void removeNewLine(char * str){
    size_t length = strlen(str);
    if(length > 0 && str[length-1]=='\n'){
        str[length-1]='\0';
    }
}

int main(){
    char adj1[20];
    char adj2[20];
    char birdType[20];
    char room[20];
    char verb1[20];
    char verb2[20];
    char relative[20];
    char noun1[20];
    char liquid[20];
    char verb3[20];
    char bodyPart[20];
    char noun2[20];
    char verb4[20];
    char noun3[20];
    
    printf("Enter one adjective: ");
    fgets(adj1, sizeof(adj1), stdin);
    removeNewLine(adj1);
    printf("Enter one adjective: ");
    fgets(adj2, sizeof(adj2), stdin);
    removeNewLine(adj2);
    
    printf("Enter a verb: ");
    fgets(verb1, sizeof(verb1), stdin);
    removeNewLine(verb1);
    printf("Enter a verb: ");
    fgets(verb2, sizeof(verb2), stdin);
    removeNewLine(verb2);
    printf("Enter a verb: ");
    fgets(verb3, sizeof(verb3), stdin);
    removeNewLine(verb3);
    printf("Enter a verb: ");
    fgets(verb4, sizeof(verb4), stdin);
    removeNewLine(verb4);
    
    printf("Enter a noun: ");
    fgets(noun1, sizeof(noun1), stdin);
    removeNewLine(noun1);
    printf("Enter a noun: ");
    fgets(noun2, sizeof(noun2), stdin);
    removeNewLine(noun2);
    printf("Enter a noun: ");
    fgets(noun3, sizeof(noun3), stdin);
    removeNewLine(noun3);
    
    printf("Enter a bird: ");
    fgets(birdType, sizeof(birdType), stdin);
    removeNewLine(birdType);
    
    printf("Enter a room: ");
    fgets(room, sizeof(room), stdin);
    removeNewLine(room);
    
    printf("Enter a relative: ");
    fgets(relative, sizeof(relative), stdin);
    removeNewLine(relative);
    
    printf("Enter a liquid: ");
    fgets(liquid, sizeof(liquid), stdin);
    removeNewLine(liquid);
    
    printf("Enter a body part: ");
    fgets(bodyPart, sizeof(bodyPart), stdin);
    removeNewLine(bodyPart);
    
    printf("It was a %s, cold November day. I woke up to the %s smell of %s roasting in the %s downstairs. I %s down the stairs to see if I could help %s the dinner. My mom said, \"See if %s needs a fresh %s.\" So I carried a tray of glasses full of %s into the %s room. When I got there, I couldn't believe my %s! There were %s %s on the %s!", adj1, adj2, birdType, room, verb1, verb2, relative, noun1, liquid, verb3, bodyPart, noun2, verb4, noun3);
    
    
    return 0;
}