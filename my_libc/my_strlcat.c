unsigned int my_strlcat(char *dest, char *src, unsigned int size){
    
    unsigned int i = 0;
    
    unsigned int start_size = strlen(dest);
    
    while(i < size && *(src+i) != '\0'){
        
        *(dest+start_size+i) = *(src+i);
        
        i++;
    }
    
    *(dest+i+start_size) = '\0';
    
    return i + start_size;
}

