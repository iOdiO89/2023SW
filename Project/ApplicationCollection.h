#include "Application.h"
#include <tuple>
#include <vector>

class ApplicationCollection
{
private:
    vector<Application> arrAC;

public:
    void addNewApply(string companyName, string businessNum, string task, int number, string deadline);
    Application getAppreference(int i);
    tuple<string, string, string> deleteApply(string businessNum);
    vector<Application> getArrAC();
};