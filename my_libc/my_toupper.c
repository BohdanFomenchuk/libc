char my_toupper(char *low){
    
if(*low > 96 && *low < 123){
    
    return *low-32;
    }else{
        printf("Error: enter a valid character from 'a' to 'z'");
    }
}