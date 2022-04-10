#include <stdio.h> //for some reason the program doesnt add spaces... 


void main(int argc, char**argv)
{
    FILE *fp1, *fp2;
    char buf[4096];
    fp1 = fopen(argv[1], "w");
    fp2 = fopen(argv[2], "r");

    while(fscanf(fp2, "%s", buf) != EOF){

        fprintf(fp1, "%s", buf);
    }
    fclose(fp1);
    fclose(fp2);
}