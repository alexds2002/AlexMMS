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
            
            int cnt = 0;
            do
            {
                ch = fgetc(currentFile);
                printf("%c\n", ch);
                cnt++;
            } while (ch != EOF && cnt < 10);
            
            fclose(currentFile);
        }
        


    }
    


    return EXIT_SUCCESS;
}