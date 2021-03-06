#include <cstdio>

int main()
{
    int no_of_sets, k;
    scanf("%d %d", &no_of_sets, &k);

    int maximum_number = (6*(no_of_sets - 1) + 5)*k;
    printf("%d\n", maximum_number);

    for(int i = 0; i < no_of_sets; i++)
    {
        const int NO_OF_TERMS = 4;
        int mod[NO_OF_TERMS] = {1, 2, 3, 5};

        for(int m = 0; m < NO_OF_TERMS; m++)
        {
            int term = (6*i + mod[m])*k;
            printf("%d ", term);
        }
        printf("\n");

    }
    return 0;
}
