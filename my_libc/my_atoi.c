int my_atoi(char *str){
    
    int result = 0;
    
    while(*str != '\0'){
    if(*str > 47 && *str < 58){
        result = (result * 10) + (*str-48);
        
        }else return 0;
        str++;
    }
return result;
}

