#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"


    AbstractTriangle::AbstractTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC)
    {
        std::cout<<"triang 1"<<std::endl;
        
        double lengthAB = vertexA.DistanceToPoint(vertexB);
        double lengthBC = vertexB.DistanceToPoint(vertexC);
        double lengthAC = vertexA.DistanceToPoint(vertexC);

        std::cout<<"triang 2"<<std::endl;

        if( (lengthAB + lengthBC <= lengthAC) ||
            (lengthAC + lengthBC <= lengthAB) ||
            (lengthAB + lengthAC <= lengthBC) ){

            throw ObjectIsCanNotCreated();
        }
std::cout<<"triang 3"<<std::endl;
        triangleABC.reserve(3);

        triangleABC.push_back(vertexA);
        triangleABC.push_back(vertexB);
        triangleABC.push_back(vertexC);
        std::cout<<"triang 4"<<std::endl;
        
    }

    double AbstractTriangle::GetLengthSquareAB() const 
    {

        return triangleABC[0].SquareOfDistanceToPoint(triangleABC[1]);
    }

    double AbstractTriangle::GetLengthSquareBC() const 
    {

        return triangleABC[1].SquareOfDistanceToPoint(triangleABC[2]);
    }
 
    double AbstractTriangle::GetLengthSquareAC() const 
    {

      return triangleABC[0].SquareOfDistanceToPoint(triangleABC[2]);
    }

    double AbstractTriangle::GetLengthAB() const 
    {

        return triangleABC[0].DistanceToPoint(triangleABC[1]);
    }

    double AbstractTriangle::GetLengthBC() const 
    {

        return triangleABC[1].DistanceToPoint(triangleABC[2]);
    }
    

    double AbstractTriangle::GetLengthAC() const 
    {

        return triangleABC[0].DistanceToPoint(triangleABC[2]);
    }
    

    //std::string AbstractTriangle::GetMessage(){ };

   
