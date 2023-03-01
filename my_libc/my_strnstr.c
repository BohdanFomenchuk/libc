char *my_strnstr(char *str, char *word, int len){
    
    char *word_begin = word; 
    if(len > strlen(word)){
        return NULL;
    }
    while(*str != '\0'){
        
        if(*str == *word){
            while(len-- > 0){
                
                if(len == 1){
                    return word_begin;
                }
                else if(*str != *word){
                    break;
                }
                word++;
                str++;
            }
        }   
        else str++;
    }
   return NULL;
}
