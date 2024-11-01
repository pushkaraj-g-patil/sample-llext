
#include <stdio.h>

static const char llext_lib[] = {
#include "input.inc"
};

int main(int argc, char *argv[])
{
    char *output_file_name = NULL;

    if (argc != 2)
    {
        printf("==================================\n");
        printf("ERROR: Incorrect arguments\n");
        printf("inc_to_bin.exe <output file name>\n");
        printf("==================================\n");
        return 0;
    }

    output_file_name = argv[1];
    if (output_file_name != NULL)
    {
        long int length = sizeof(llext_lib);

        FILE *fp = fopen(output_file_name, "w+");
        if (fp < 0)
            printf("ERROR: not able to open %s\n", output_file_name);
        else
        {
            int cnt = 0;
            while (cnt < length)
            {
                fputc(llext_lib[cnt], fp);
                cnt++;
            }
            fflush(fp);
            fclose(fp);
            printf("INFO: %d bytes written succucessfully\n", cnt);
        }
    }
    else
        printf("ERROR: Something wrong...");

EXIT:
    return 0;
}