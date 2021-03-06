#include <cstdio>
#include <vector>
#include <algorithm>

#define all(v) (v).begin(), (v).end()
using namespace std;

int main()
{
    int no_of_digits;
    scanf("%d", &no_of_digits);

    vector <int> number;
    for(int i = 1; i <= no_of_digits; i++)
    {
        int digit_i;
        scanf("%1d", &digit_i);

        switch(digit_i)
        {
            case 2:
            case 3:
            case 5:
            case 7: number.push_back(digit_i);
                    break;

            case 4: number.push_back(2); number.push_back(2); number.push_back(3);
                    break;

            case 6: number.push_back(3); number.push_back(5);
                    break;

            case 8: number.push_back(2); number.push_back(2); number.push_back(2); number.push_back(7);
                    break;

            case 9: number.push_back(2); number.push_back(3); number.push_back(3); number.push_back(7);
                    break;
        }
    }

    sort(all(number));

    for(int i = number.size() - 1; i >= 0; i--)
        printf("%d", number[i]);

    return 0;
}
