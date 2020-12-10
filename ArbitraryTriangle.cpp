#include "ArbitraryTriangle.h"

 ArbitraryTriangle::ArbitraryTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC):  AbstractTriangle(vertexA, vertexB, vertexC){


    double lengthAB = GetLengthAB();
    double lengthBC = GetLengthBC();
    double lengthAC = GetLengthAC();

    if( (lengthAB + lengthBC == lengthAC) ||
        (lengthAC + lengthBC == lengthAB) ||
        (lengthAB + lengthAC == lengthBC) ){

        throw ObjectIsCanNotCreated();
    }
}

 std::string ArbitraryTriangle::GetMessage(){

    return std::string(" arbitrary Triangle\n");
}