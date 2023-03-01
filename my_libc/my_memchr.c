void *my_memchr(char *str, char *c, unsigned int len){
    
    while(len > 0 && *str != '\0'){
        if(*str == *c){
            return str;
        }
        *str++;
        len--;
    }
}
