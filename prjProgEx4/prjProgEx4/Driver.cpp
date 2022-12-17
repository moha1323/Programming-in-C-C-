#include <iostream>
using namespace std;

void rectangleArea() {

	double rectOneLength,
		rectOneWidth,
		rectTwoLength,
		rectTwoWidth,
		rectOneArea,
		rectTwoArea;

	cout << "Rectangle One: Enter a Length: ";
	cin >> rectOneLength;
	cout << "Rectangle One: Enter a Width: ";
	cin >> rectOneWidth;
	cout << "\n";
	cout << "Rectangle Two: Enter a Length: ";
	cin >> rectTwoLength;
	cout << "Rectangle Two: Enter a Width: ";
	cin >> rectTwoWidth;

	rectOneArea = rectOneLength * rectOneWidth;
	rectTwoArea = rectTwoLength * rectTwoWidth;

	cout << "\n";

	cin.get();

	if (rectOneArea > rectTwoArea) {
		cout << "Rectangle One has greater area than Rectangle Two!";
	}
	else if (rectTwoArea > rectOneArea) {
		cout << "Rectangle Two has greater area than Rectangle One!";
	}
	else if (rectOneArea == rectTwoArea) {
		cout << "Rectangle One's area equals Rectangle Two's area.";
	}

	cin.get();
}

void geoCalculatorMenu() {//Helper Method for Challenge 11
	cout << "Geometry Calculator \n\n";
	cout << "\t1. Calculate the Area of a Circle\n";
	cout << "\t2. Calculate the Area of a Rectangle\n";
	cout << "\t3. Calculate the Area of a Triangle\n";
	cout << "\t4. Quit\n";
}

void geoCalculator() {

	geoCalculatorMenu();
	int menuChoice;
	double circleRadius,
		circleArea,
		rectLength,
		rectWidth,
		rectArea,
		triBaseLength,
		triHeight,
		triArea;
	
	cin >> menuChoice;

	switch (menuChoice){
	case 1: cout << "Enter the Radius of the Circle: ";
		cin >> circleRadius;
		circleArea = circleRadius * 3.14159;
		cout << "Area of the Circle: " << circleArea;
		cout << "\n\n";
		geoCalculator();
		break;
	case 2: cout << "Enter the Length of the Rectangle: ";
		cin >> rectLength;
		cout << "Enter the Width of the Rectangle: ";
		cin >> rectWidth;
		rectArea = rectLength * rectWidth;
		cout << "Area of the Rectangle: " << rectArea;
		cout << "\n\n";
		geoCalculator();
		break;
	case 3: cout << "Enter the Length of the Triangle's Base: ";
		cin >> triBaseLength;
		cout << "Enter the Height of the Triangle: ";
		cin >> triHeight;
		triArea = .5 * triBaseLength * triHeight;
		cout << "Area of the Triangle: " << triArea;
		cout << "\n\n";
		geoCalculator();
		break;
	case 4: 
		break;
	default: cout << "Invalid Request, Try Again!";
		cout << "\n\n";
		geoCalculator();
		break;
	}
}


int main() {
	rectangleArea(); //Challenge 4
	cout << "\n";
	geoCalculator(); //Challenge 11
	return 0;
}
