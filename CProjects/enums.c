#include <stdio.h>

// enum color{
//     red,
//     green,
//     blue
// };

// const char* myEnumName(enum color color) { 
//     switch (color) {
//         case red: return "red";
//         case green: return "green";
//         case blue: return "blue";
//         default: return "unknown";
//     }
// }

int main(){

    // printf("The color is: %s\n", myEnumName(red));

    enum Company{
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum Company company1 = XEROX;
    enum Company company2 = GOOGLE;
    enum Company company3 = EBAY;
    
    for(int i = 0; i < 3; i++){
        switch(i){
            case 0:
                printf("Xerox is: %d\n", company1);
                break;
            case 1:
                printf("Google is: %d\n", company2);
                break;
            case 2:
                printf("Ebay is: %d\n", company3);
                break;
            default:
                printf("Unknown company\n");
                break;
        }
    }
    return 0;
}