all: test

test: common_function.o main.o Point2D.o AbstractTriangle.o ObjectIsCanNotCreated.o ArbitraryTriangle.o common_function.o EquilateralTriangle.o IsoscelesAndRightAngledTriangle.o IsoscelesTriangle.o RightAngledTriangle.o TriangleBilder.o
	g++ common_function.o main.o Point2D.o AbstractTriangle.o ObjectIsCanNotCreated.o  ArbitraryTriangle.o  EquilateralTriangle.o IsoscelesAndRightAngledTriangle.o IsoscelesTriangle.o RightAngledTriangle.o TriangleBilder.o -o test

common_function.o: common_function.cpp
	g++ -c common_function.cpp
	
main.o: main.cpp
	g++ -c main.cpp

Point2D.o: Point2D.cpp
	g++ -c Point2D.cpp

AbstractTriangle.o: AbstractTriangle.cpp
	g++ -c AbstractTriangle.cpp
	
ObjectIsCanNotCreated.o: ObjectIsCanNotCreated.cpp
	g++ -c ObjectIsCanNotCreated.cpp
	
ArbitraryTriangle.o: ArbitraryTriangle.cpp
	g++ -c ArbitraryTriangle.cpp
	
EquilateralTriangle.o: EquilateralTriangle.cpp
	g++ -c EquilateralTriangle.cpp

IsoscelesAndRightAngledTriangle .o: IsoscelesAndRightAngledTriangle.cpp
	g++ -c IsoscelesAndRightAngledTriangle.cpp
	
IsoscelesTriangle.o: IsoscelesTriangle.cpp
	g++ -c IsoscelesTriangle.cpp
	
RightAngledTriangle.o: RightAngledTriangle.cpp
	g++ -c RightAngledTriangle.cpp
	
TriangleBilder.o: TriangleBilder.cpp
	g++ -c TriangleBilder.cpp
	
clean:
	rm -rf *.o test
	
	
	              
