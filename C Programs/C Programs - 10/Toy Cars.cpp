#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int no_of_cars;
    scanf("%d", &no_of_cars);

    vector <int> good_cars;

    for(int i = 1; i <= no_of_cars; i++)
    {
        bool good_car = true;
        for(int j = 1; j <= no_of_cars; j++)
        {
            int collision;
            scanf("%d", &collision);

            if(collision == 1 || collision == 3)
                good_car = false;
        }

        if(good_car)
            good_cars.push_back(i);
    }

    printf("%u\n",good_cars.size());
    for(unsigned int i = 0; i < good_cars.size(); i++)
        printf("%d\n", good_cars[i]);

    return 0;
}
