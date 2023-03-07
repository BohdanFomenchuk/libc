int my_isalpha(int arg) {
    if((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z')){
        return 1;
    }else{
        return 0;
    }
}
