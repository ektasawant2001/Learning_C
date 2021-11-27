
#include <stdio.h>
int main()
{
        FILE * fp;
        char file_name[50];

        printf("Enter the file name :: ");
        scanf("%s",file_name);
        fp = fopen (file_name, "w");

        fprintf(fp, "%s %s %s %s", "Hii ", "I ", "am ","ekta");
        printf("\nSuccessfully written to the file %s \n",file_name);

        fclose(fp);
        return 0;
}

