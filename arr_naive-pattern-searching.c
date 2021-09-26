#include<stdio.h>
#include<string.h>

void search(char *pat, char *txt);

void main(){
    char *txt = "AABAACAADAABAAABAAA";
    char *pat = "AABA";

    search(pat, txt);
}

void search(char *pat, char *txt){
    int A = strlen(pat);
    int B = strlen(txt);
    int i, j;
    for(i=0; i<B-A; i++){
        for(j=0; j<A; j++){
            if(txt[i+j]!=pat[j]){
                break;
            }
        }
        if(j==A){
            printf("\npattern %s matched at location %d!!!\n",pat,i+1);
        }
    }
    
              

}
