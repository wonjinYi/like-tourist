#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t, r, c;       // test case, row, column
    char **arr = NULL; // candy box
    char str[802];     // input string

    int n = 0; // the number of candies (answer)

    scanf("%d", &t);

    while (1)
    {
        n = 0;
        scanf("%d", &r);

        // -- handle row/col input. : if r > 0
        if (r != 0)
        {
            scanf("%d", &c);
        }
        // -- handle empty-line : if r == 0
        else
        {
            continue;
        }

        getchar();

        // allocate memory for the current candy box.
        arr = (char **)malloc(sizeof(char *) * r);
        for (int i = 0; i < r; i++)
        {
            arr[i] = (char *)malloc(sizeof(char) * c);
        }

        // get real input
        for (int i = 0; i < r; i++)
        {
            gets(str);
            for (int j = 0; j < c; j++)
            {
                arr[i][j] = str[j];
            }
        }

        // find candies
        // -- horizontally
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c - 2; j++)
            {
                char left = arr[i][j];
                char center = arr[i][j + 1];
                char right = arr[i][j + 2];
                if (left == '>' && center == 'o' && right == '<')
                {
                    n++;
                }
            }
        }
        // -- vertically
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r - 2; j++)
            {
                char top = arr[j][i];
                char center = arr[j + 1][i];
                char bottom = arr[j + 2][i];
                if (top == 'v' && center == 'o' && bottom == '^')
                {
                    n++;
                }
            }
        }

        // dealloc memory
        if (arr != NULL)
        {
            for (int i = 0; i < r; i++)
            {
                free(arr[i]);
            }
            free(arr);
        }

        // print the number of candies
        printf("%d\n", n); // THE ANSWER

        // decrese t. decide whether to continue or not.
        t--;
        if (t == 0)
        {

            break;
        }
    }

    return 0;
}