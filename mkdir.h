#ifndef MKDIR_H
#define MKDIR_H

typedef struct Directory{

        char name[100];
        struct Directory **subdirectories;

} Directory;

void mkdir(Directory *dir, char name[]);


#endif
