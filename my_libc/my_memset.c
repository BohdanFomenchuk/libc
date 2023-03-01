void my_memset(char *start_ptr, int value, unsigned int size){
    
    for (int i=0; i<size; i++){
        
        *(start_ptr+i) = value;
    }
}