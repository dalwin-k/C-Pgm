#include<stdio.h>
int main(){
    FILE*fp;
    char data[100];
    fp=fopen("example.txt","w");
    if(fp==NULL){
        printf(" error opening file!\n");
        return 1;
    }
fprintf(fp,"hello file handling in c!\n");
fprintf(fp," this is a sample example.\n");
fclose(fp);
fp=fopen("example.txt","r");
    if(fp==NULL){
        printf(" error opening file!\n");
        return 1;
    }
    printf(" content of the file:\n");
    while(fgets (data, 100,fp)!=NULL){
        printf("%s",data);
    }
    fclose(fp);
}