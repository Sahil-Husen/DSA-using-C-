
    return main;
}


string deleteAtPosition(string &str,int nth,int pos ){

    int length = len(str);

    for(int i=pos-1;i<=nth;i++){
        if(str[i]!=str[nth++]){
            return str;
        }
        else{
            continue;
        }
    }  
