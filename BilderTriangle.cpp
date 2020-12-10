#include "BilderTriangle.h"

bool  BilderTriangle::CreateEquilateralTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC, std::unique_ptr<AbstractTriangle> &ptrTriangle ){


       try{

           ptrTriangle = std::make_unique<EquilateralTriangle>(vertexA,vertexB,vertexC);

       } catch(const ObjectIsCanNotCreated& exception){

            return false;
        }

       return true;
}

bool  BilderTriangle::CreateIsoscelesAndRightAngledTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC, std::unique_ptr<AbstractTriangle> &ptrTriangle){



       try{

            ptrTriangle = std::make_unique<IsoscelesAndRightAngledTriangle>(vertexA,vertexB,vertexC);

       } catch(const ObjectIsCanNotCreated& exception){

            return false;
        }

       return true;
    }

bool  BilderTriangle::CreateIsoscelesTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC, std::unique_ptr<AbstractTriangle> &ptrTriangle){



       try{

            ptrTriangle = std::make_unique<IsoscelesTriangle>(vertexA,vertexB,vertexC);

       } catch(const ObjectIsCanNotCreated& exception){

            return false;
        }

       return true;
    }

bool  BilderTriangle::CreateRightAngledTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC, std::unique_ptr<AbstractTriangle> &ptrTriangle){

    
       try{

            ptrTriangle = std::make_unique<RightAngledTriangle>(vertexA,vertexB,vertexC);

       } catch(const ObjectIsCanNotCreated& exception){

            return false;
        }

       return true;
    }

bool  BilderTriangle::CreateArbitraryTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC, std::unique_ptr<AbstractTriangle> &ptrTriangle){

       try{

            ptrTriangle = std::make_unique<ArbitraryTriangle>(vertexA,vertexB,vertexC);

       } catch(const ObjectIsCanNotCreated& exception){

            return false;
        }

       return true;
    }

bool BilderTriangle::CreateEmptyTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC, std::unique_ptr<AbstractTriangle> &ptrTriangle){
       
       try{

            ptrTriangle = std::make_unique<EmptyTriangle>(vertexA,vertexB,vertexC);

       } catch(const ObjectIsCanNotCreated& exception){

            return false;
        }

       return true;
    }


bool BilderTriangle::BildTriangle(Point2D vertexA, Point2D vertexB, Point2D vertexC, std::unique_ptr<AbstractTriangle> &ptrTriangle){
       


   if( CreateEquilateralTriangle(vertexA, vertexB, vertexC, ptrTriangle) ){

       return true;
   }
      
       
  if( CreateIsoscelesAndRightAngledTriangle(vertexA, vertexB, vertexC, ptrTriangle)){
       
       return true;
   }

  if( CreateIsoscelesTriangle(vertexA, vertexB, vertexC, ptrTriangle)){
       
       return true;
   }

   if( CreateRightAngledTriangle(vertexA, vertexB, vertexC, ptrTriangle)){
       
       return true;
   }

    if( CreateArbitraryTriangle(vertexA, vertexB, vertexC, ptrTriangle)){
       
       return true;
   }

   if( CreateEmptyTriangle(vertexA, vertexB, vertexC, ptrTriangle)){
       
       return true;
   }

     
    return false;
      
}