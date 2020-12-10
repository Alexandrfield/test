#ifndef ARBITRARY_TRIANGLE_H_ 
#define ARBITRARY_TRIANGLE_H_ 

#include "common_include.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"


class ArbitraryTriangle : public AbstractTriangle
{
    public:

    ArbitraryTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC);

    virtual std::string GetMessage();
};
 

#endif  // ARBITRARY_TRIANGLE_H_ 