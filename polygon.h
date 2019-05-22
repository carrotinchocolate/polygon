#pragma once
#include<vector>

class Polygon
{
public:
    Polygon(std::vector<double> X, std::vector<double> Y);
    std::string GetName() const;
    double GetArea() const;
    double GetPerimeter() const;
    double GetAnglesSum() const;
    double GetLongestDiagonalLength() const;
    double GetLongestSideLength() const;
    int GetVertices() const;
    int GetN(int n_);
    void Move(const double x_delta, const double y_delta);

private:
    int n;
    std::vector<double> X;
    std::vector<double> Y;


};

