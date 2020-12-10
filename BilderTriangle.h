#ifndef BILDER_TRIANGLE_H_ 
#define BILDER_TRIANGLE_H_ 

#include "common_include.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"

#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "IsoscelesAndRightAngledTriangle.h"
#include "RightAngledTriangle.h"
#include "ArbitraryTriangle.h"
#include "EmptyTriangle.h"


 
class BilderTriangle
{
  

    bool  CreateEquilateralTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC,std::unique_ptr<AbstractTriangle> &ptrTriangle);

    bool  CreateIsoscelesAndRightAngledTriangle(Point2D vertexB, Point2D topB, Point2D vertexC,std::unique_ptr<AbstractTriangle> &ptrTriangle);
 
    bool CreateIsoscelesTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC,std::unique_ptr<AbstractTriangle> &ptrTriangle);

    bool  CreateRightAngledTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC,std::unique_ptr<AbstractTriangle> &ptrTriangle);

    bool CreateArbitraryTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC,std::unique_ptr<AbstractTriangle> &ptrTriangle);

    bool   CreateEmptyTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC,std::unique_ptr<AbstractTriangle> &ptrTriangle);
    

    public:

    bool  BildTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC,std::unique_ptr<AbstractTriangle> &ptrTriangle);

};

#endif  // BILDER_TRIANGLE_H_ 