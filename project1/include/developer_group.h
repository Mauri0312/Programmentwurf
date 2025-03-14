#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H  // Defines DEVELOPER_GROUP_H if not already defined

#include <stdio.h>
#include <stdlib.h>

#include "developer.h"  //Includes developer.h but because of "" searches first in the local the file and then global if not found


typedef struct
{                              // Defines DeveloperGroup
    Developer developers[10];  // Only 10 developer allowed
    int numDevelopers;         // Placeholder for the number of developers
    char logo[200];            // The logo has a char array storage of 200 units
} DeveloperGroup;
void initDeveloperGroup(DeveloperGroup *group, const char *logo);      // Declares the function for the group
void addDeveloper(DeveloperGroup *group, const Developer *developer);  // Declares the function to add an developer
void printGroupLogo(const DeveloperGroup *group);                      // Declares the function to print the grouplogo
void listDevelopers(const DeveloperGroup *group);                      // Declares the function for the developerlist
void printCombination(const DeveloperGroup *group);                    // declares the function to print the combination
#endif                                                                 // Ends defintion
