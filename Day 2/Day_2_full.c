#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 500
#define abc 26

int main(){

int i=0,j,b=0,max2=0,max3=0,broj,len,prov=0,h,k;
char A[max]={};
char B[max][max]={};
int brojac[max][abc]={};
int provjera[max][abc]={};

FILE *text;
text = fopen("Input_day_2.txt","r");

while(1){
    fscanf(text, "%s", &A);
        if(feof(text))
        break;
    strcpy(B[i],A);
    len=strlen(A);
    for(j=0;j<len;j++){
        broj=A[j]-97;
        brojac[i][broj]+=1;}
    i++;
    b++;
}

broj=0,len=0;
for(i=0;i<b+1;i++){
    for(j=0;j<26;j++){
        if(brojac[i][j]==2)
            broj++;
        if(brojac[i][j]==3)
            len++;
    }
    if(broj!=0)
        max2++;
    if(len!=0)
        max3++;
    broj=0;
    len=0;
}
printf("Checksum = %d\n",max2*max3);

for(i=0;i<b;i++){
    for(j=i+1;j<b+1;j++){
        for(h=0;h<26;h++){
            if(B[i][h]==B[j][h]){
                provjera[i][h]=1;
                prov++;}}
        if(prov==25){
            printf("Letters common between the two correct box IDs: ");
            for(k=0;k<26;k++)
                if(provjera[i][k]==1)
                    printf("%c",B[i][k]);
            for(k=0;k<26;k++)
            for(k=0;k<26;k++)
                if(provjera[i][k]==0)
            return 0;}
        else prov=0;
    }

}






fclose(text);
return 0;}
