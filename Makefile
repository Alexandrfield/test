all: test

test: main.o Point2D.o AbstractTriangle.o ObjectIsCanNotCreated.o ArbitraryTriangle.o EmptyTriangle.o EquilateralTriangle.o IsoscelesAndRightAngledTriangle.o IsoscelesTriangle.o RightAngledTriangle.o BilderTriangle.o
	g++ main.o Point2D.o AbstractTriangle.o ObjectIsCanNotCreated.o ArbitraryTriangle.o EmptyTriangle.o EquilateralTriangle.o IsoscelesAndRightAngledTriangle.o IsoscelesTriangle.o RightAngledTriangle.o BilderTriangle.o -o test

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

EmptyTriangle.o: EmptyTriangle.cpp
	g++ -c EmptyTriangle.cpp
	
EquilateralTriangle.o: EquilateralTriangle.cpp
	g++ -c EquilateralTriangle.cpp

IsoscelesAndRightAngledTriangle .o: IsoscelesAndRightAngledTriangle.cpp
	g++ -c IsoscelesAndRightAngledTriangle.cpp
	
IsoscelesTriangle.o: IsoscelesTriangle.cpp
	g++ -c IsoscelesTriangle.cpp
	
RightAngledTriangle.o: RightAngledTriangle.cpp
	g++ -c RightAngledTriangle.cpp
	
BilderTriangle.o: BilderTriangle.cpp
	g++ -c BilderTriangle.cpp
	
clean:
	rm -rf *.o test
	
	
	              
