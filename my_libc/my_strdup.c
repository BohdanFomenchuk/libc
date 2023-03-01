char *my_strdup(char *str){
    
    char *new_str;
    
    int size = strlen(str)+1;
    
    new_str = (char*) malloc(size);
    
    for(size = 0; size <= strlen(str); size++){
        *(new_str+size) = *(str+size);
        
    }
   
    return new_str;
}
