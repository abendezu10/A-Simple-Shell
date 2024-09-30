#ifndef COMMANDS_H
#define COMMANDS_H

typedef struct Directory{

        char name[100];
        struct Directory **subdirectories;

} Directory;


void ls(Directory* dir);

void mkdir(Directory *dir, char name[]);


#endif 
