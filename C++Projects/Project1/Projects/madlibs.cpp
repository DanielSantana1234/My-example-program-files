#include <iostream>
#include <string>
using namespace std;

int main(){
    string adj1, adj2;
    cout << "Enter two adjectives: ";
    cin >> adj1 >> adj2;
    
    string verb1, verb2, verb3, verb4;
    cout << "Enter four verbs: ";
    cin >> verb1 >> verb2 >> verb3 >> verb4;
    
    string noun1, noun2, noun3;
    cout << "Enter three nouns: ";
    cin >> noun1 >> noun2 >> noun3;
    
    string bird;
    cout << "Enter a bird: ";
    cin >> bird;
    
    string room;
    cout << "Enter a room: ";
    cin >> room;
    
    string relative;
    cout << "Enter a relative: ";
    cin >> relative;
    
    string liquid;
    cout << "Enter a liquid: ";
    cin >> liquid;
    
    string bodyPart;
    cout << "Enter a bodypart: ";
    cin >> bodyPart;
    
    cout << "It was a " + adj1 + ", cold November day. I woke up to the " + adj2 + " smell of " + bird + " roasting in the " + room + " downstairs. I " + verb1 + " down the stairs to see if I could help " + verb2 + " the dinner. My mom said, \"See if " + relative + " needs a fresh " + noun1 + ".\"" + " So I carried a tray of glasses full of " + liquid + " into the " + verb3 + " room. When I got there, I couldn't believe my " + bodyPart + "! There were " + noun2 + " " + verb4 + " on the " + noun3 + "!" << endl;
    return 0;
}