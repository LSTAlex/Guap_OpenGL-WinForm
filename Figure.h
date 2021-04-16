#pragma once
#include <cmath>
#include <iostream>
#define PI 3.14159265

public class Point {
public:


	int x;

	int y;


	Point() {}


	Point(int x, int y) {


		this->x = x;


		this->y = y;

	}
};

public class rectangle {
public:

	Point points[10];


	rectangle(int* points) {


		int j = 0;


		for (int i(0); i < 5; i++) {



			j = i * 2;



			this->points[i].x = points[j];



			this->points[i].y = points[j + 1];


		}

	}


	rectangle() {

	}


	void rotateClockwise(float val) {


		float angle = val * PI / 180;


		for (int i(0); i < 5; i++) {



			int x1 = round((this->points[i].x * cos(angle))) - round((this -
		> points[i].y * sin(angle)));



			int y1 = round((this->points[i].x * sin(angle))) + round((this -
		> points[i].y * cos(angle)));



			this->points[i].x = x1;



			this->points[i].y = y1;


		}

	}


	void reflectV() {


		for (int i(0); i < 5; i++) {



			int y1 = -(round(this->points[i].y));



			this->points[i].y = y1;


		}

	}


	void reflectH() {


		for (int i(0); i < 5; i++) {



			int x1 = -(round(this->points[i].x));



			this->points[i].x = x1;


		}

	}
};
