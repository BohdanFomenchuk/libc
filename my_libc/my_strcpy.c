unsigned int my_strlcpy(char *dest, char *src, unsigned int size){
    
    int i = 0;
    while(i < size && *(src+i) != '\0'){
        *(dest+i) = *(src+i);
        i++;
    }
    
    *(dest+i) = '\0';
    
    return i;
}

