char* mystrcpy(char* kohde, const char* lahde){

    int n = 0;

    while(lahde[n] != '\0'){
        kohde[n] = lahde[n];
        n++;
    }

    return(kohde);

}

char* mystrcat(char* kohde, char* lahde){

int n = 0,
i = 0;

    while(kohde[n] != '\0'){
        n++;
    }



    while(lahde[i] != '\0'){
        kohde[n] = lahde[i];
        n++;
        i++;
    }
    return(kohde);

}
