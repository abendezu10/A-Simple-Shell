#ifndef MKDIR_H
#define MKDIR_H

#define MAX_NAME_LENGTH 100

typedef struct Directory{

  char name[MAX_NAME_LENGTH];
  struct Directory **subdirectories; // Pointer to an Array of Pointers to directories
  struct Directory *parentdirectory;
  int num_subdirectories    ;
	
} Directory;


void mkdir(Directory *parent_directory, char name[]);

Directory *create_directory(Directory *parent_directory, const char name[]);

void add_subdirectory(Directory *parent_directory, Directory *sub_directory);
  

#endif
