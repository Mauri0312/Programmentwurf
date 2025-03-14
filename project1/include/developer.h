#ifndef DEVELOPER_H
#define DEVELOPER_H  // Defines DEVELOPER_H if it isn`t already defined

#include <stdio.h>

typedef struct
{                   // Defines the structure Developer
    char name[50];  // Defines how much storage space the array of the name and alias has
    char alias[50];
} Developer;

void initDeveloper(
    Developer *developer, const char *name,
    const char *alias);  // Declares the initialisation of developer with two pointers on the arrays name and alias
void printDeveloper(const Developer *developer);  // Declares the function print developer

#endif  // Ends definition
