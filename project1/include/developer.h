#ifndef DEVELOPER_H
#define DEVELOPER_H                                                              //defines DEVELOPER_H if it isn`t already defined

#include <stdio.h>

typedef struct{                                                                  //defines the structure Developer
    char name[50];                                                               //defines how much storage space the array of the name and alias has 
    char alias[50];
} Developer;

void initDeveloper(Developer *developer, const char *name, const char *alias);  //declares the initialisation of developer with two pointers on the arrays name and alias
void printDeveloper(const Developer *developer);                                //declares the function print developer

#endif                                                                          //ends definition
