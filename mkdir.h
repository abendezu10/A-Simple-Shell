#ifndef MKDIR_H
#define MKDIR_H

typedef struct Directory{

        char name[100];
        struct Directory **subdirectories = NULL;
	struct Directory *parentdirectory;
	

} Directory;


void mkdir(Directory *dir, char name[]);

//void addSubDirectory(Directory *cur_dir, 


#endif
