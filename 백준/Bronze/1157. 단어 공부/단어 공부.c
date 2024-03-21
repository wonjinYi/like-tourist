#include <stdio.h>

#define NUMBER_OF_ALPARBETS ('z' - 'a' + 1)
#define DIFF_BETWEEN_SMALL_AND_CAPITAL ('a' - 'A')

int main()
{
    // An count array for a-z.
    // arr[0] stands for the number of a(or A) in the input string.
    int arr[NUMBER_OF_ALPARBETS] = {0};

    // Read the input string
    // while counting the numbers of each letter.
    char ch = 'a';
    while (1)
    {
        scanf("%c", &ch);

        // only alphabets are allowed.
        if ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z'))
            break;

        // convert small letter to capital letter.
        if (ch >= 'a')
            ch = ch - (DIFF_BETWEEN_SMALL_AND_CAPITAL);

        // increase count of the input letter.
        arr[ch - 'A']++;
    }

    // find the max count.
    int max_idx = 0;
    int max_count_value = 0;
    for (int i = 0; i < NUMBER_OF_ALPARBETS; i++)
    {
        if (arr[max_idx] < arr[i])
            max_idx = i;
    }
    max_count_value = arr[max_idx];

    // check if there is same counts.
    int exist = -1;
    for (int i = 0; i < NUMBER_OF_ALPARBETS; i++)
        if (max_count_value == arr[i])
            exist++;

    // print the answer
    if (exist <= 0)
        printf("%c", 'A' + max_idx);
    else
        printf("?");

    return 0;
}