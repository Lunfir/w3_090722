#include <iostream>
#include <cmath>


class Point 
{
public:
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

    double getX()
    {
        return this->x;
    }

    double getY()
    {
        return this->y;
    }

    void setX(double x)
    {
        this->x = x;
    }

    void setY(double y)
    {
        this->y = y;
    }

    Point& operator+=(Point& other)
    {
        this->x += other.x;
        this->y += other.y;

        return *this;
    }

    Point operator+(Point& other)
    {
        Point res;

        res.x = this->x + other.x;
        res.y = this->y + other.y;

        return res;
    }

private:
    double x;
    double y;
};

int main()
{
    Point pointA, pointB, pointSum;

    pointA.setX(1);
    pointA.setY(12);

    pointB.setX(12);
    pointB.setY(13);

    pointA.pointPrint();
    pointB.pointPrint();

    std::cout   << "is equal: "
                << pointA.pointEqual(pointB)
                << std::endl;

    std::cout   << "distance: "
                << pointA.pointDistance(pointB)
                << std::endl;
    
    pointA += pointB;
    pointA.pointPrint();
    pointB.pointPrint();

    // pointSum = pointA.operator+(pointB);
    pointSum = pointA + pointB;
    pointSum.pointPrint();
}
