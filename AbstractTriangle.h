#ifndef TRIAGLE_H_ 
#define TRIAGLE_H_ 

#include "common_include.h"
#include "Point2D.h"

class AbstractTriangle
{
    Point2D triangleABC[3];

    double GetLengthSquare(const Point2D &firstPoint,const Point2D &secondPoint) const;
    double GetLength(const Point2D &firstPoint,const Point2D &secondPoint) const;

    public:
AbstractTriangle()
{
    triangleABC[0]=Point2D();
        triangleABC[1]=Point2D();
            triangleABC[0]=Point2D();
}
    AbstractTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC);

    void SetVertex(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC);

    double GetLengthSquareAB() const;

    double GetLengthSquareBC() const;
 
    double GetLengthSquareAC() const;

    double GetLengthAB() const;

    double GetLengthBC() const;
    
    double GetLengthAC() const;

    virtual std::string GetMessage() = 0;

   
};


 

#endif  // TRIAGLE_H_ 

 