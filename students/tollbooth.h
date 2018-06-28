#pragma once

#ifndef TOLLBOOTH_H
#define TOLLBOOTH_H
const float toll = 0.50;

class TollBooth {
private: 
	int m_nPayingStus;
	int m_nDeadbeatStus;
	static int m_nCourseCount;
	bool setCourseData();
public:
	TollBooth();
	static int getCourseCount();
	int getNumStudents();
	int getNumDeadBeats();
	double calcTollCollected();
	void setInputs();
};
#endif