 #include "IsoscelesTriangle.h"

 IsoscelesTriangle::IsoscelesTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC): AbstractTriangle(vertexA, vertexB, vertexC) {


    double lengthAB = GetLengthAB();
    double lengthBC = GetLengthBC();
    double lengthAC = GetLengthAC();



    if( (lengthAB + lengthBC == lengthAC) ||
        (lengthAC + lengthBC == lengthAB) ||
        (lengthAB + lengthAC == lengthBC) ){

        throw ObjectIsCanNotCreated();

        }

    if( (lengthAC != lengthAB) &&  
        (lengthBC != lengthAB) && 
        (lengthBC != lengthAC) ){

        throw ObjectIsCanNotCreated();

        }
}

std::string IsoscelesTriangle::GetMessage(){

    return std::string(" isosceles  Triangle\n");
};