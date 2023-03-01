void my_memcpy(void *to_arr, void *from_arr, unsigned int size){
    
    for (int i=0; i<size; i++){
        
        *((char*)to_arr+i) = *((char*)from_arr+i);
    }
}
