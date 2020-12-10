#ifndef RIGHT_ANGLED_TRIANGLE_H_ 
#define RIGHT_ANGLED_TRIANGLE_H_ 

#include "common_include.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"



class RightAngledTriangle : public AbstractTriangle
{
    public:

    RightAngledTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC);

    std::string GetMessage();

};
 

#endif  // RIGHT_ANGLED_TRIANGLE_H_ 