#include <stdio.h>
#include <stdbool.h>

int main(){
    char str[] = "aabgc";
    int hash[26] = {0};

    for(int i=0; str[i]!='\0'; i++){
        char ch = str[i];
        int index = ch - 'a';

        if(hash[index] > 0){
            printf("Duplicate");
            return 0;
        }
        
        else {
            hash[index] += 1;
        }
    }
    printf("Not Duplicate");

    return 0;
}