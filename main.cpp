#include <iostream>
#include <vector>
#include "polygon.h"

int main()
{
   int n_ = 0;
    std::cout << "Input n: " << std::endl;
    std::cin >> n_;
    std::vector<double> X_(n_);
    std::vector<double> Y_(n_);

    for (int i = 0; i < n_; i++)
    {
        std::cout << "Input X-coordinate" << std::endl;
        std::cin >> X_[i];
        std::cout << "Input Y-coordinate" << std::endl;
        std::cin >> Y_[i];

    }

    /*Polygon polygon1(X_, Y_);
    std::cout << "Otladka" << std::endl;

    std::cout << polygon1.GetPerimeter() << std::endl;

    return 0;*/
}
