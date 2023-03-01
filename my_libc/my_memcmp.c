int my_memcmp(void *str1, void *str2, unsigned int len){
    
    int diff = 0;
    char *p1 = (char*)str1;
    char *p2 = (char*)str2;
    
    while(len > 0){
        
        if(*p1 != *p2){
            
        diff += *p1 - *p2;
        
        }
        p1++;
        p2++;
        len--;
    }
  return diff;
}