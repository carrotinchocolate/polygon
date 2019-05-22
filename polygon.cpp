#include <iostream>
#include <cmath>
#include <vector>
#include "polygon.h"
#include <cassert>

   int Polygon::GetN(int n_)
    {
        n = n_;

        return n;
    }

    Polygon::Polygon(std::vector<double> X_, std::vector<double> Y_)
    {

        for(int i = 0; i < n; i++)
        {
            X[i] = X_[i];
            Y[i] = Y_[i];
        }

    }
    std::string Polygon::GetName() const
    {
        return(n + "-угольник" );
    }
    double Polygon::GetArea() const
    {
        double sum = 0;

		for (int i = 0; i < n - 1; ++i)
        {

			sum += ((X[i] + X[i+1]) * (Y[i] - Y[i+1]));
		}
		return(sum / 2);

    }
    double Polygon::GetPerimeter() const
    {
        double ans = 0;
		for (int i = 0; i < n; ++i)
        {
			int j = (i + 1) % n;
			ans += sqrt((X[i] - X[j]) * (X[i] - X[j]) +(Y[i] - Y[j]) * (Y[i] - Y[j]));
		}
		return ans;
    }
    double Polygon::GetAnglesSum() const
    {
        return(180 * (n - 2));
    }
    double Polygon::GetLongestDiagonalLength() const
    {
        //double max_d = sqrt( (X[0] - X[1])*(X[0] - X[1]) + (Y[1] - Y[0])*(Y[1] - Y[0]) );
        double max_d = 0;
        for ( int i = 2; i < n; i++ )
        {

            max_d = std::max(max_d, sqrt( (X[i-1] - X[i])*(X[i-1] - X[i]) + (Y[i-1] - Y[i])*(Y[i-1] - Y[i])));

        }
        return max_d;
	}


    double Polygon::GetLongestSideLength() const
    {
        double ans = 0;
		for (int i = 0; i < n; ++i)
        {
			int j = (i + 1) % n;
			ans = std::max(ans, sqrt(((X[i] - X[j]) * (X[i] - X[j]) +(Y[i] - Y[j]) * (Y[i] - Y[j]))));
		}
		return ans;

    }
    int Polygon::GetVertices() const
    {
        return n;
    }
    void Polygon::Move(const double x_delta, const double y_delta)
    {
        for (int i = 0; i < n; ++i)
        {
			X[i] += x_delta;
			Y[i] += y_delta;
		}
    }

