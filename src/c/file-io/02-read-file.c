#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

void read_file(FILE *fp, int data[], int *size)
{
    *size = 0;
    while (fscanf(fp, "%d", &data[*size]) == 1) 
    // fscanf returns 1 if success, 0 if fails
    {
        (*size)++;
    }
}

void print_data(int data[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", data[i]);
    }
}

double average(int data[], int size)
{
    int i;
    double average = 0.0;

    for (i = 0; i < size; i++)
    {
        average += data[i];
    }

    return (average / size);
}

int main()
{
    int i;
    int size = MAX_SIZE;
    FILE *fp;
    int data[MAX_SIZE] = {0};

    fp = fopen("file.dat", "r");
    if (fp == NULL)
    {
        printf("File could not be opened.\n");
        exit(1);
    }

    read_file(fp, data, &size);

    printf("My %d scores are:\n", size);
    print_data(data, size);

    printf("Average score: %.2f\n", average(data, size));
    fclose(fp);
    return 0;
}
