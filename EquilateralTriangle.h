#ifndef EQUILATERAL_TRIANGLE_H_ 
#define EQUILATERAL_TRIANGLE_H_ 

#include "common_include.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"




class EquilateralTriangle : public AbstractTriangle
{
    public:
    
    EquilateralTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC);

    std::string GetMessage();
};

 

#endif  // EQUILATERAL_TRIANGLE_H_ 