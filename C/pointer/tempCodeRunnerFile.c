void get_3x3_array(int array[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }
}

int main()
{
    int user_array[3][3];
    get_3x3_array(user_array);

    printf("User entered array:\n");
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", user_array[i][j]);
        }
        printf("\n");
    }

    return 0;
}