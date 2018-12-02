#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j=0, p, sum=0;
    FILE *text;
    text = fopen("1.txt","r");
    if(!text)
        return 1;
    while(1){

        fscanf(text, "%d", &i);
        if(feof(text))
        break;
        sum+= i;
            }
    printf("Resulting frequency is : %d",sum);
    fclose(text);
    return 0;
}
