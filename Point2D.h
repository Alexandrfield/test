#ifndef POINT2D_H_ 
#define POINT2D_H_ 

 #include "common_include.h"

class Point2D
{
    double xCoordinate_;
    double yCoordinate_;

    public:

    Point2D(double x, double y);

    double GetX() const;

    double GetY() const;

};


 

#endif  // POINT2D_H_ 
