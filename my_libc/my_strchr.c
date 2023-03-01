char *my_strchr(char *str, char *c){
    
    while(*str != '\0'){
        str++;
        if (*str == *c){
            return str;
        }
        if(*str == '\0'){
            return NULL;
        }
    }
}