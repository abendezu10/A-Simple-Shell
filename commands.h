#ifndef COMMANDS_H
#define COMMANDS_H

typedef struct Directory{

        char name[100];
        struct Directory *directories;

} Directory;


void ls();

void mkdir(char name[]);


#endif 
