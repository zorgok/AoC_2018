#include <stdio.h>
#include <stdlib.h>
#define max 1400
#define maxx 1000

int main(){

int x[max]={},y[max]={},z[max]={},q[max]={},proof[max]={},n,i=0,j,k,b=0;

char (*mat)[maxx] = malloc(sizeof(char[maxx][maxx]));

FILE *text;
text = fopen("Input_day_3.txt","r");
  if(!text)
        return 1;

while(1){
    fscanf(text, "#%d @ %d,%d: %dx%d\n",&n,&x[i],&y[i],&z[i],&q[i]);
        if(feof(text))
        break;
    for(j=x[i];j<x[i]+z[i];j++){
        for(k=y[i];k<y[i]+q[i];k++){
                if(mat[j][k]=='.'){
                    mat[j][k]='X';
                    proof[i]++;
                   }
                else if(mat[j][k]=='X'){
                    proof[i]++;
                    continue;}
                else{
                    mat[j][k]='.';
                 //   printf("%c",mat[j][k]);
                   }
                }
    }
    i++;
}
i=0;
rewind(text);
while(1){
    fscanf(text, "#%d @ %d,%d: %dx%d\n",&n,&x[i],&y[i],&z[i],&q[i]);
        if(feof(text))
        break;
    for(j=x[i];j<x[i]+z[i];j++){
        for(k=y[i];k<y[i]+q[i];k++){
                if(mat[j][k]=='X')
                    proof[i]++;
                }
    }
    i++;
}

for(i=0;i<maxx;i++)
    for(j=0;j<maxx;j++)
        if(mat[i][j]=='X')
            b++;
printf("Square inches of fabric are within two or more claims: %d\n",b);

for(i=1;i<max;i++)
    if(proof[i]==0){
        printf("ID of the only claim that doesn't overlap is: %d",i+1);
        return 0;
}
free(mat);
fclose(text);

return 0;}
