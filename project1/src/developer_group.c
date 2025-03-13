#include "developer_group.h"
#include <stdio.h>
#include <string.h>

void initDeveloperGroup(DeveloperGroup *group, const char *logo) {                  //Initialisation of the DeveloperGroup-structure with logo
    group->numDevelopers = 0;                                                       //Puts the number of developers in the group to zero
    strcpy(group->logo, logo);                                                      //Copies the content of 'logo' into the 'logo' field of the 'group' structure
}

void addDeveloper(DeveloperGroup *group, const Developer *developer) {              //Initialisation of a function to adds a developer to the group
    if (group->numDevelopers < 10) {                                                //If the number of developers in the group is less than 10
        group->developers[group->numDevelopers] = *developer;                       //The developer is added to the group
        group->numDevelopers++;                                                     //The number of developers in the group is increased by one
    }
}

void printGroupLogo(const DeveloperGroup *group) {                                  //Initialisation of a function to print the group logo
    printf("Group Logo: \n %s\n", group->logo);                                        //Prints the group logo
}

void printCombination(const DeveloperGroup *group) {                                      //Initialisation of a function to print the group
    printGroupLogo(group);                                                          //Prints the group logo
    listDevelopers(group);                                                          //Lists the developers in the group
}

void listDevelopers(const DeveloperGroup *group) {                                  //Initialisation of a function to list the developers in the group
    printf("Developers:\n");                                                        //Prints "Developers:"
    for (int i = 0; i < group->numDevelopers; i++) {                                //For every developer in the group
        printDeveloper(&group->developers[i]);                                      //Prints the developer
    }
}
