#include "developer_group.h"                                                        // Include the header file for DeveloperGroup structure and related functions
#include <stdio.h>                                                                  // Include standard input/output library for printf function
#include <string.h>                                                                 // Include string library for strcpy function

void initDeveloperGroup(DeveloperGroup *group, const char *logo) {                  // Initialisation of the DeveloperGroup-structure with logo
    group->numDevelopers = 0;                                                       // Set the number of developers in the group to zero
    strcpy(group->logo, logo);                                                      // Copy the content of 'logo' into the 'logo' field of the 'group' structure
}

void addDeveloper(DeveloperGroup *group, const Developer *developer) {              // Initialisation of a function to add a developer to the group
    if (group->numDevelopers < 10) {                                                // If the number of developers in the group is less than 10
        group->developers[group->numDevelopers] = *developer;                       // Add the developer to the group
        group->numDevelopers++;                                                     // Increase the number of developers in the group by one
    }
}

void printGroupLogo(const DeveloperGroup *group) {                                  // Initialisation of a function to print the group logo
    printf("Group Logo: \n %s\n", group->logo);                                     // Print the group logo
}

void printCombination(const DeveloperGroup *group) {                                // Initialisation of a function to print the group logo and list developers
    printGroupLogo(group);                                                          // Print the group logo
    listDevelopers(group);                                                          // List the developers in the group
}

void listDevelopers(const DeveloperGroup *group) {                                  // Initialisation of a function to list the developers in the group
    printf("Developers:\n");                                                        // Print "Developers:"
    for (int i = 0; i < group->numDevelopers; i++) {                                // For every developer in the group
        printDeveloper(&group->developers[i]);                                      // Print the developer
    }
}
