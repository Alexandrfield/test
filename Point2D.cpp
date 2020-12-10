#include "Point2D.h"



Point2D::Point2D(double x, double y): xCoordinate_(x),yCoordinate_ (y){ };

double Point2D::GetX() const{

        return xCoordinate_;
    }

double Point2D::GetY() const{

        return yCoordinate_;
    }


