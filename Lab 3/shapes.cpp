#include <iostream>
#include <cmath>
#include "bmplib.h"

using namespace std;

// Global variable
unsigned char image[SIZE][SIZE];

// Draw straight lines
void draw_line(int x0, int y0, int x1, int y1)
{
	if(y0 == y1)
	{
		for(int j = x0; j < x1; j++)
		{
			if (y0 >= 0 && j >= 0 && y0 < 256 && j < 256)
			{
				image[y0][j] = 0;
			}
		}
	}
	if(x0 == x1)
	{
		for(int k = y0; k < y1; k++)
		{
			if(k >= 0 && x0 >= 0 && k < 256 && x0 < 256)
			{
				image[k][x0] = 0;
			}
		}
	}
}

// Rectangle
void draw_rectangle(int top, int left, int height, int width)
{
	int h = top + height;
	if(h > 256)
		{h = 256;}
	
	int w = left + width;
	if(w > 256)
		{w = 256;}
	
	// Draw horizontal lines
	draw_line(left, top, w, top);
	draw_line(left, h, w, h);
	
	//vertical
	draw_line(left, top, left, h);
	draw_line(w, top, w, h);
}

// Ellipse 
void draw_ellipse(int cy, int cx, int height, int width)
{
	int x = 0;
	int y = 0;
	double h = height / 2;
	double w = width / 2;
	for(double theta = 0; theta < 2*M_PI; theta += 0.001 )
	{
		x = (w * cos(theta)) + cx;
		y = (h * sin(theta)) + cy;
		if(x < 256 && y < 256 && x >= 0 && y >= 0)
		{
			image[y][x] = 0;
		}
	}
}

int main()
{
	// Initilize variables
	int mode = -1;
	int x0 = 0;
	int y0 = 0;
	int height = 0;
	int width = 0;
	
	// initialize the image to all white pixels
	for(int i = 0; i < SIZE; i++)
	{
		for(int j = 0; j < SIZE; j++)
		{
			image[i][j] = 255;
		}
	}
	
	// Main drawing function here
	// while loop is based on the boolean value for "run"
	while(mode != 2)
	{
		// Prompt the user and obtain input
		cout << "Please enter the number corresponding to desired function: " << endl;
		cout << "[0] Rectangle - Input: 0 top left height width" << endl;
		cout << "[1] Ellipse - Input: 1 cy cx height width" << endl;
		cout << "[2] Save your drawing as \"output.bmp\" and quit - Input: 2" << endl;
		cin >> mode;
		
		// Append the inputs following the number to their variables
		cin >> x0 >> y0 >> height >> width;
		
		// Mode cases
		if(mode == 0)
		{
			draw_rectangle(x0, y0, height, width);
		}
		else if(mode == 1)
		{
			draw_ellipse(x0, y0, height, width);
		}
	}
	// Write the resulting image to the .bmp file
	writeGSBMP("output.bmp", image);
	
	return 0;
}