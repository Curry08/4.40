#include <stdio.h>

int main(){
    int lung;
    printf("Inserisci la lungezza del lato del quadrato: ");
    scanf("%d", &lung);
    printf("\n");
    for(int i=0 ; i<lung ; i++){
        for(int j=0; j<lung; j++){
            if(i==0 || i==lung-1 || j==0 || j==lung-1){
                printf("*  ");
            }
            else{printf("   ");}
        }
        printf("\n");
    }
    return 0;
}