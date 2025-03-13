#ifndef DEVELOPER_GROUP_H  
#define DEVELOPER_GROUP_H                                                   //defines DEVELOPER_GROUP_H if not already defined

#inculde "developer.h"                                                      //includes developer.h but because of "" searches first in the local the file and then global if not found

typedef{                                                                    //defines DeveloperGroup 
    Developer developers[10];                                               //only 10 developer allowed
    int numDevelopers;                                                      //placeholder for the number of developers                                                        
    char logo[4000];                                                        //the logo has a char array storage of 4000 units
}DeveloperGroup;
void initDeveloperGroup(DeveloperGroup *group, const char *logo);           //declares the function for the group
void addDeveloper(DeveloperGroup *group, const Developer *developer);       //declares the function to add an developer
void printGroupLogo(const DeveloperGroup *group);                           //declares the function to print the grouplogo
void listDevelopers(const DeveloperGroup *group);                           //declares the function for the developerlist

#endif                                                                      //ends defintion
