#include<stdio.h>
int main(){
    FILE *fp = fopen("my_file.txt", "w");
    fprintf(fp, "Hello, world!\n");
    fclose(fp);
    return 0;
}
