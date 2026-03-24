#include<stdio.h>
main()
{
    FILE *fp;
    char str[100];

    // Create and write to file
    fp = fopen("sample.txt", "w");
    printf("Enter a string: ");
    gets(str);

    fprintf(fp, "%s", str);
    fclose(fp);

    // Open file again to read
    fp = fopen("sample.txt", "r");
    fgets(str, 100, fp);

    printf("File content: %s", str);

    fclose(fp);
}
