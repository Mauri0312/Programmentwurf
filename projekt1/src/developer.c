#include "developer.h"
#include <string.h>                                                                             

void initDeveloper(Developer *developer, const char *name, const char *alias) {                 //Initialisation of developer-structure with name and alias
    strcpy(developer->name, name);                                                              // Copies the content of 'name' into the 'name' field of the 'developer' structure              
    strcpy(developer->alias, alias);                                                            // Copies the content of 'alias' into the 'alias' field of the 'developer' structure            
}

void printDeveloper(const Developer *developer) {
    printf("Name: %s, Alias: %s\n", developer->name, developer->alias);                         //Prints the name and alias of the developer
}
