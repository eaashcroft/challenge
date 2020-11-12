#include <iostream>
using namespace std;

/*  Program to calculate the amount of paint required to paint a room.
    Assumptions:    default coverage rate of 13m2/l,
                    room has one window and one door,
                    the wall dimensions don't vary across the lengths
                    dimensions are in metres.

    Written by Liz Ashcroft
    Date 11/11/20
*/

// Function declaration
double areaCalculation(double dimX, double dimY) {
    return dimX * dimY;
    }

int main() {


	double coverage, paint, totalPaint;
	double width, length, height, widthArea, lengthArea, roomArea;
    double windowHeight, windowWidth, doorHeight, doorWidth;
    double doorArea, windowArea, totalArea;
    string defaultCoverage;


	coverage = 13;  // from Dulux website
	cout << "Default coverage is " << coverage <<"m2/l";
	cout << "Use the default y/n ";
	cin >> defaultCoverage;

	// Change coverage rate
	if (defaultCoverage == "y") {
        // Keep the default coverage rate
        } else{
        cout << "Enter coverage rate for your paint in m2/l ";
        cin >> coverage;

        // This will overwrite the default coverage rate.
        }


	// Enter the room width, length and height
	cout << "\n Enter the width of the room (m) ";
	cin >> width;
	cout << "\n Enter the length of the room (m) ";
	cin >> length;
    cout << "\n Enter the height of the room (m) ";
	cin >> height;

	//Calculate the area of the walls

    widthArea = areaCalculation(width, height);
    lengthArea = areaCalculation(length, height);

	/* Calculate the room area.  There are two walls
	of each size/ */

    roomArea = (widthArea * 2) + (lengthArea * 2);
    cout << "\n The total area of the walls is: " << roomArea << " m2";


    // Enter window dimensions.
    cout << "\n Enter the height of the window (m)";
	cin >> windowHeight;
    cout << "\n Enter the width of the window (m)";
	cin >> windowWidth;

	// Calculate the window area
	windowArea = areaCalculation(windowHeight, windowWidth);

    // Enter door dimensions
    cout << "\n Enter the height of the door (m)";
	cin >> doorHeight;
    cout << "\n Enter the width of the door (m)";
	cin >> doorWidth;

    // Calculate the window area
	doorArea = areaCalculation(doorHeight, doorWidth);

	//Subtract door and window dimensions from roomArea
	totalArea = roomArea - windowArea - doorArea;
    cout << "\n Total Area is " << totalArea << " m2";

    //Calculate the amount of paint required
    paint = totalArea/coverage;
    cout << "\n The amount of paint for one coat is " << paint <<" litres";
    cout << "\n Dulux recommends two coats for good coverage \n";
    totalPaint = paint * 2;

    // Program outputs
    cout << "\n The area of the floor is " << width*length <<" m2";
    cout << "\n The total amount of paint for two coats is " << totalPaint <<" litres";
    cout << "\n The volume of the room is " <<width*length*height <<" m3";
	return 0;
	}
