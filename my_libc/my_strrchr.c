char *my_strrchr(char *str, char *c){
    char *last = NULL;
    while(*str != '\0'){
        str++;
        if (*str == *c){
            last = str;
        }
        if(*str == '\0'){
            return last;
        }
    }
}