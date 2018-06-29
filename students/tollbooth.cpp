#include "stdafx.h"
#include "tollbooth.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int TollBooth::m_nCourseCount = 0;

TollBooth::TollBooth()
{
	cout << "Now creating an uninitialized course element ...." << endl;
}

int TollBooth::getCourseCount()
{
	return m_nCourseCount;
}

int TollBooth::getNumStudents()
{
	return m_nPayingStus + m_nDeadbeatStus;
}

int TollBooth::getNumDeadBeats()
{
	return m_nDeadbeatStus;
}

double TollBooth::calcTollCollected()
{
	return m_nPayingStus * toll;
}

void TollBooth::setInputs()
{
	setCourseData();
}

void TollBooth::setCourseData()
{
	int numStudents;

	cout << "How many students entered the room?";
	cin >> numStudents;
	cout << "Enter number of students that paid:";
	cin >> m_nPayingStus;

	if (m_nPayingStus > numStudents)
	{
		cout << "*** Invalid input: more paying than entered! ***" << endl;
		setCourseData();
	}
	else
	{
		m_nDeadbeatStus = numStudents - m_nPayingStus;
		m_nCourseCount++;
	}
}