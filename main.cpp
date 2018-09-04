#include <iostream>
#include "Cone.h"

using namespace std;

int main()
{
    {
        Cone cone(10, 20);

        cone.setVolume(26.179938779915);

        cone.print_val();
    }

    cin.get();

    return 0;
}
