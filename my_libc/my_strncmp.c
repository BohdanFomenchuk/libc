int my_strncmp(char *str1, char *str2, int len){
    
    int diff = 0;
    while(len != 0 && *str1 != '\0' && *str1 != '\0'){
        diff = *str1 - *str2;
        str1++;
        str2++;
	len--;
    }
    return diff;
}