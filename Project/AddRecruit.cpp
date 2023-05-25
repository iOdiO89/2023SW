#include "AddRecruit.h"


void AddRecruit::addNewRecruit(string task, int number, string deadline, Member* currentMember) {
	currentMember->addNewRecruit(task, number, deadline);
}