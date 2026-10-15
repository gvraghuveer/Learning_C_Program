#include<stdio.h>

int main(){
    char str[] = "banana";
    int hashFreq[26] = {0};

    for(int i=0; str[i] != '\0'; i++){
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z'){      // Convert 
            str[i] = str[i] + 32;        // To
        }                                // Lower Case

        int index = str[i] - 'a';
        hashFreq[index]++;
    }

    for(int i=0; i<26; i++){
        if(hashFreq[i] > 0){
            printf("Frequency of %c = %d\n", 'a' + i, hashFreq[i]);
        }
    }

    return 0;
}