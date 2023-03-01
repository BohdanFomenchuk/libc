char my_tolower(char *cap){
    
if(*cap > 64 && *cap < 91){
    
    return *cap+32;
    }else{
        printf("Error: enter a valid character from 'A' to 'Z'");
    }
}
