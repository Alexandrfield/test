
#include "common_include.h"
#include "AbstractTriangle.h"
#include "Point2D.h"
#include "BilderTriangle.h"


int main(){

    int counter_experiment = 0;

    int vertexAX = 0, vertexAY = 0;
    int vertexBX = 0, vertexBY = 0;
    int vertexCX = 0, vertexCY = 0;

    std::cout << " enter count experiment" << std::endl;
    std::cin >> counter_experiment;

   

    BilderTriangle bilderObjectTriangle;

    std::unique_ptr<AbstractTriangle> pointerToTriagle;


    for(int index = 0; index < counter_experiment; index++){

        std::cout << " vertex A: " << std::endl;
        std::cin >> vertexAX >> vertexAY;
        Point2D vertexA(vertexAX, vertexAY);

        std::cout << std::endl << " vertex B: " << std::endl;
        std::cin >> vertexBX >> vertexBY;
        Point2D vertexB(vertexBX, vertexBY);

        std::cout << std::endl << " vertex C: " << std::endl;
        std::cin >> vertexCX >> vertexCY;
        Point2D vertexC(vertexCX, vertexCY);

        std::cout << std::endl;


       try{

          if( bilderObjectTriangle.BildTriangle(vertexA, vertexB, vertexC,pointerToTriagle) ){
              
            std::cout << pointerToTriagle->GetMessage() << std::endl;

          } else{

              std::cout << "ERROR! triangle is can't created" << std::endl;
            }
        }
        catch(std::exception &exept){

        std::cout << "EXEPTION: "<<exept.what()<< std::endl;
        }
    }


    std::cout << " end" << std::endl;
    getchar();

    return 0;
}