#include <iostream>
#include <cmath>


class Point 
{
public:
    Point()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    Point(int x, int y)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;

        this->x = x;
        this->y = y;
    }

    int pointEqual(Point other) const
    {
        return this->x == other.x && this->y == other.y;
    }

    double pointDistance(Point other)
    {
        return hypot(this->x - other.x, this->y - other.y);
    }

    double getX() const
    {
        return this->x;
    }

    double getY() const
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

    Point operator+(int other)
    {
        Point res;

        res.x = this->x + other;
        res.y = this->y + other;

        return res;
    }

    Point& operator=(const Point& other)
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;

        this->x = other.x;
        this->y = other.y;

        return *this;
    }

private:
    double x;
    double y;

    friend std::ostream& operator<<(std::ostream& os, const Point& obj);
};

std::ostream& operator<<(std::ostream& os, const Point& obj)
{
    os  << "(" 
        << obj.getX() << ", " 
        << obj.getY() << ")";

    return os;
}

int main()
{
    Point pointA(1, 12);
    Point pointB = Point(12, 13);
    Point pointSum;

    std::cout << pointA << std::endl;
    std::cout << pointB << std::endl;

    std::cout   << "is equal: "
                << pointA.pointEqual(pointB)
                << std::endl;

    std::cout   << "distance: "
                << pointA.pointDistance(pointB)
                << std::endl;
    
    pointA += pointB;
    std::cout << pointA << std::endl;
    std::cout << pointB << std::endl;

    // pointSum = pointA.operator+(pointB);
    std::cout << "PointSum:" << std::endl;
    // pointSum = pointA + 12;
    pointSum = pointA + pointB;
    std::cout << pointSum << std::endl;


}
