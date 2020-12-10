#ifndef ISOSCELES_TRIANGLE_H_ 
#define ISOSCELES_TRIANGLE_H_ 

#include "common_include.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"



class IsoscelesTriangle : public AbstractTriangle
{
    public:

    IsoscelesTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC);

    std::string GetMessage();

};

 

#endif  // ISOSCELES_TRIANGLE_H_ 