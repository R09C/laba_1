#pragma once
#include "structPoint.h"
#include <cmath>

class SegmentInPlane
{
private:
	PointStruct point1;
	PointStruct point2;
	double len;
public:
	SegmentInPlane(double x1, double x2, double y1, double y2) : point1(PointStruct(x1, y1)), point2(PointStruct(x2, y2)) {
		len = this->segmentLen(point1, point2);
	}
	double getLen() {
		return len;
	}

	double segmentLen(PointStruct point1, PointStruct point2) {
		PointStruct vector = point2 - point1;
		double vectorLen = vector.x* vector.x + vector.y* vector.y;
		double sqrtVectorLen = std::sqrt(vectorLen);
		return sqrtVectorLen;
	}

	PointStruct middleSegment() {
		PointStruct middlePoint = point2 + point1;
		return middlePoint / 2;
	}

	PointStruct pointDelSegment(double const lambda) {
		double x = (point1.x + lambda * point2.x) / (1 + lambda);
		double y = (point1.y + lambda * point2.y) / (1 + lambda);
		return PointStruct(x, y);
	}

	bool isEqual(SegmentInPlane newClass) {
		double newlen = newClass.len;
		return abs(len - newlen) < 1e-6;
	}

	bool isParallelOx() {
		return point1.y == point2.y;
	}

	bool isParallelOy() {
		return point1.x == point2.x;
	}

	double k() {
		const double k = (point2.y - point1.y) / (point2.x - point1.x);
		return k;
	}

	bool isParallel(SegmentInPlane newClass) {
		double k1 = this->k();
		double k2 = newClass.k();
		return (abs(this->k() - newClass.k()) < 1e-6)||(this->k()==INFINITY&& newClass.k()== INFINITY);
	}

	bool isNormal(SegmentInPlane newClass) {
		PointStruct vector—omposition = (newClass.point2 - newClass.point1) * (point2 - point1);
		const double scalar—omposition = (vector—omposition.x + vector—omposition.y);
		return scalar—omposition == 0;
	}

	bool isIntersectsOx() {
		return point1.y * point2.y <=0;
	}

	bool isIntersectsOy() {
		return point1.x * point2.x <= 0;
	}

	bool isIncludedPoint(PointStruct newPoint) {
		return 
			this->isIncludedPointInLine(newPoint) &&
			((point1.x <= newPoint.x && newPoint.x <= point2.x) || 
				(point1.x >= newPoint.x && newPoint.x >= point2.x)) &&
			((point1.y <= newPoint.y && newPoint.y <= point2.y) || 
				(point1.y >= newPoint.y && newPoint.y >= point2.y));
	}

	bool isIncludedPointInLine(PointStruct newPoint) {
		return (newPoint.x - point1.x) * (point2.y - point1.y) == (newPoint.y - point1.y) * (point2.x - point1.x);
	}

	double findLambda(PointStruct newPoint) {
		double len1 = this->segmentLen(point1, newPoint);
		double len2 = this->segmentLen(newPoint, point2);
		if (len1 > len2) {
			return len1 / len2;
		}
		else {
			return len2 / len1;
		}
	}

	bool isIntersects(double k, double b) {

		if ((point1.x * k + b >= point1.y && point2.x * k + b <= point2.y) || (point1.x * k + b <= point1.y && point2.x * k + b >= point2.y)) {
			return true;
		}
		else {
			return false;
		}

	}

	PointStruct extendSegment(const double k) {
		const double tx = (k * (point2.x - point1.x) + point1.x) ;
		const double ty = (k * (point2.y - point1.y) + point1.y) ;
		PointStruct newPoint = PointStruct(tx, ty);
		return newPoint;
	}

};

