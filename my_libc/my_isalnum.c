int my_alnum(int arg){
    
    return ((arg < '1' || arg > '9') && (arg < 'a' || arg > 'z') && (arg < 'A' || arg > 'Z') ) ? 0 : 1;
}
