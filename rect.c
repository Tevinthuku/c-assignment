#include <stdio.h>

// Variable declaration:
// extern stands for external which means making a variable external
extern int width;
extern int height;
extern int area;
extern int perimeter;

int main() {

	/*variable definition*/
	int width, height;
	
	int area;

	int perimeter;	
	//int a, b;
	//int c;
	//float f;

	/*actual initialization*/
	width = 30;
	height = 40;
	
	area = width * height;

	perimeter = (width + height) * 2;
	//a = 10;
	//b = 20;


	//c = a + b;
	// priint the value of the area
	printf("Value of area is : %d \n", area);	
	//printf("Value of c : %d \n", c);
	
	printf("Value of perimeter is : %d \n", perimeter);

	//f = 70.0/3.0;

	//printf("Value of f : %f \n", f);

	return 0;

}
