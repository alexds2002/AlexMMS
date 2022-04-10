#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    long len;
    char ch;
    if (argc <= 1)
    {
        fprintf(stderr, "ERROR: Not enough arguments!");
        return 1;
    }else{
        for (int i = 1; i < argc; i++)
        {
            FILE *currentFile = fopen(argv[i], "r");
            fseek(currentFile,0,SEEK_END);

            len = ftell(currentFile);
            if (len <= 10)
            {
                len = 0;
            }else{
                len -= 10;
            }
            
            fseek(currentFile, len , SEEK_SET);
            do
            {
                ch = fgetc(currentFile);
                printf("%c\n", ch);
            } while (ch != EOF);
            
            fclose(currentFile);
        }
        


    }
    


    return EXIT_SUCCESS;
}