

void parse_command(char *command, char *exec, char * opt){

  int i = 0, j = 0;

  while((*(command + i) != '\0' && *(command + i) != ' ' )){
    
    exec[j++] = command[i++];
  }
  exec[j] = '\0';

  if(command[i] == ' '){
    
    i++;
  }

  j = 0;
  while(*(command + i) != '\0'){
    opt[j++] = command[i++];

  }

  opt[j] = '\0';
}
