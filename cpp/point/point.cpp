#include <iostream>
#include <cmath>

struct Point 
{
    double x;
    double y;

    void pointPrint() {
        std::cout   << "(" 
                    << this->x << ", " 
                    << this->y << ")" 
                    << std::endl;
    }

    int pointEqual(Point other) {
        return this->x == other.x && this->y == other.y;
    }

    double pointDistance(Point other) {
        return hypot(this->x-other.x, this->y-other.y);
    }
};

int main()
{
    Point pointA, pointB;

    pointA.x = 1;
    pointA.y = 12;

    pointB.x = 12;
    pointB.y = 13;

    pointA.pointPrint();
    pointB.pointPrint();

    std::cout   << "is equal: "
                << pointA.pointEqual(pointB)
                << std::endl;

    std::cout   << "distance: "
                << pointA.pointDistance(pointB)
                << std::endl;
}
