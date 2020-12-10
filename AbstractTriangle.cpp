#include "AbstractTriangle.h"



    double AbstractTriangle::GetLengthSquare(const Point2D &firstPoint,const Point2D &secondPoint) const{ 

        double lengthX = firstPoint.GetX() - secondPoint.GetX();
        double lengthY = firstPoint.GetY() - secondPoint.GetY();

        double squareLength = (lengthX * lengthX) + (lengthY * lengthY);

        return squareLength;
    }

    double AbstractTriangle::GetLength(const Point2D &firstPoint,const Point2D &secondPoint) const{

        double squareLength = GetLengthSquare(firstPoint,secondPoint);

        return std::sqrt(squareLength);
    }



    AbstractTriangle::AbstractTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC){

        triangleABC[0] = vertexA;
        triangleABC[1] = vertexB;
        triangleABC[2] = vertexC;
        
    }


    void AbstractTriangle::SetVertex(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC){
 
        triangleABC[0] = vertexA;
        triangleABC[1] = vertexB;
        triangleABC[2] = vertexC;
   }

    double AbstractTriangle::GetLengthSquareAB() const{

        return GetLengthSquare(triangleABC[0], triangleABC[1]);
    }

    double AbstractTriangle::GetLengthSquareBC() const{

        return GetLengthSquare(triangleABC[1],triangleABC[2]);
    }
 
    double AbstractTriangle::GetLengthSquareAC() const{

       return AbstractTriangle::GetLengthSquare(triangleABC[0],triangleABC[2]);
    }

    double AbstractTriangle::GetLengthAB() const{

        return GetLength(triangleABC[0], triangleABC[1]);
    }

    double AbstractTriangle::GetLengthBC() const{

        return GetLength(triangleABC[1],triangleABC[2]);
    }
    

    double AbstractTriangle::GetLengthAC() const{

       return GetLength(triangleABC[0],triangleABC[2]);
    }
    

  //  std::string AbstractTriangle::GetMessage(){ };

   
