#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv){

    char input[500];

    if (argc < 1)
    {
        fprintf(stderr, "ERROR!");
        return 1;
    }else if(argc == 1){
        while (scanf("%s", input) != EOF)
        {
            
            printf("%s\n", input);
        }       
        
    }
    else{

        for (int i = 1; i < argc; i++)
        {
            FILE* currFile = fopen(argv[i], "r");
            char output;
            while (fread(&output, sizeof(char), 1, currFile))
            {
                printf("%c", output);
            }
            
            
        }
        
    }

    return 0;
}