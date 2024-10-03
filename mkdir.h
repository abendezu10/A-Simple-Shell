#ifndef MKDIR_H
#define MKDIR_H

#define MAX_NAME_LENGTH 100

typedef struct Directory{

  char name[MAX_NAME_LENGTH];
  struct Directory **subdirectories = NULL; // Pointer to an Array of Pointers to directories
	struct Directory *parentdirectory;
	

} Directory;


void mkdir(Directory *parent, char name[]);

Directory *create_directory(const char name[], Directory *parent);


//void addSubDirectory(Directory *cur_dir, 


#endif
