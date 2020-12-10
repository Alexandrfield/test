#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC): AbstractTriangle(vertexA, vertexB, vertexC) {

    double lengthAB = GetLengthAB();
    double lengthBC = GetLengthBC();
    double lengthAC = GetLengthAC();

    if( lengthAB == 0 ){
         
        throw ObjectIsCanNotCreated();

        }

    if( (lengthAC != lengthAB) ||  (lengthBC != lengthAC) ){

        throw ObjectIsCanNotCreated();

        }
    }

    std::string EquilateralTriangle::GetMessage(){

        return std::string(" quilateral Triangle\n");

    };
