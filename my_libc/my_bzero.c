void my_bzero(void *start_ptr, unsigned int size){
    
    for (int i=0; i<size; i++){
        
        *((char*)start_ptr+i) = '\0';
    }
}