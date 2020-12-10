#include "IsoscelesAndRightAngledTriangle.h"

IsoscelesAndRightAngledTriangle::IsoscelesAndRightAngledTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC): AbstractTriangle(vertexA, vertexB, vertexC) {


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

    if( (lengthAC != lengthAB) &&  
        (lengthBC != lengthAB) && 
        (lengthBC != lengthAC) ){

        throw ObjectIsCanNotCreated();
    }
}

std::string IsoscelesAndRightAngledTriangle::GetMessage(){

    return std::string(" isosceles and right-angled  Triangle\n");

}