#include <stdio.h>
#include <string.h>

int main(){
    int alph[26]={0, };
    char s[101];
    scanf("%s", s);
    for (int i=0; i<strlen(s);i++){
        alph[s[i]-'a']++;
    }
    for (int i=0; i<26;i++){
        printf("%d ", alph[i]);
    }
}