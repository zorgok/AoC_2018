#include <stdio.h>
#include <stdlib.h>
#define max 150000

int main(){
    int i, j=0, p, sum=0;
    int x[max];
    FILE *text;
    text = fopen("1.txt","r");
    if(!text)
        return 1;
    while(1){
    while(1){
        fscanf(text, "%d", &i);
        if(feof(text))
        break;
        x[j] = sum;
            j++;
        sum+= i;
        for(p = 0; p < j - 1; p++){
        if(x[j-1] == x[p]){
            printf("The device first reaches %d Hz twice",x[p]);
            return 0;
                }
            }
        }
        rewind(text);
    }
    fclose(text);
    return 0;
}
