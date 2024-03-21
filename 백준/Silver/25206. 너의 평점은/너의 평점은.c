#include <stdio.h>

int main()
{
    char title[51];
    float credit;
    char grade[3];

    float sum_weighted_credit = 0;
    float sum_credit = 0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%s %f %s", title, &credit, grade);
        if (grade[0] == 'P')
            continue;

        float plus = grade[1] == '+' ? 0.5 : 0;
        sum_credit += credit;

        if (grade[0] == 'A')
            sum_weighted_credit += (4 + plus) * credit;
        else if (grade[0] == 'B')
            sum_weighted_credit += (3 + plus) * credit;
        else if (grade[0] == 'C')
            sum_weighted_credit += (2 + plus) * credit;
        else if (grade[0] == 'D')
            sum_weighted_credit += (1 + plus) * credit;
    }

    printf("%f", sum_weighted_credit / sum_credit);

    return 0;
}