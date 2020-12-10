#include "RightAngledTriangle.h"

RightAngledTriangle::RightAngledTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC): AbstractTriangle(vertexA, vertexB, vertexC){


    double lengthAB = GetLengthSquareAB();
    double lengthBC = GetLengthSquareBC();
    double lengthAC = GetLengthSquareAC();
        
    if( lengthAB == 0 || lengthBC == 0 || lengthAC == 0 ){

        throw ObjectIsCanNotCreated();
    }

    if( ( lengthAB + lengthBC != lengthAC ) &&  
        ( lengthAB + lengthAC != lengthBC ) &&  
        ( lengthAC + lengthBC != lengthAB ) ){

        throw ObjectIsCanNotCreated();
    }
}

std::string RightAngledTriangle::GetMessage(){

    return std::string(" right  Triangle\n");
};