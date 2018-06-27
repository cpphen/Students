#pragma once

#ifndef TOLLBOOTH_H
#define TOLLBOOTH_H

class TollBooth {
private: 
	int m_nPayingStus;
	int m_nDeadbeatStus;
	static int m_nCourseCount;
public:
	static int getTotalCourses();
	static int getCourseCount();
	int getNumStudents();
	int getNumDeadBeats();
	void calcTollCollected();
	void setInputs();
};


#endif


