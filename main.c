#include <stdio.h>

#define MAX 1024

int main(int argc, char **argv ) {

    int num = 0;

    while(1){

        char command[MAX];
        printf("$ ");
        fgets(command, MAX, stdin);

        for(int i = 0; i<sizeof(command); i++){

            if(*(command+i)== ' '){




            }



        }




    }


    return 0;

}
