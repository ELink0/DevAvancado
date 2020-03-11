#include <stdio.h>
#include <string.h>
#include <iostream>
#include <list>

using namespace std;

struct mystruct{
char firstname[20];
char lastname[20];
};



int main () {
    
    list<mystruct> names;

    mystruct aName;
    strcpy (aName.firstname, "jon");
    strcpy (aName.lastname, "smith");
    
    printf( aName.firstname, aName.lastname);

    printf("\n");

    return 0;
}
