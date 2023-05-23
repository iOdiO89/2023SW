#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Recruit
{
private:
	string companyName;
	string task;
	int number;
	string deadline;
protected:
	void GetRecruitDetails();
public:
	void ModifySelectedRecruit();
	void EndRecruit();
};
class RecruitCollection
{
private:
	Recruit* applicedRecruit[];
public:
	void FindFirst();
	void GetNext();
	void AddRecruit();
	void RemoveRecruit();
};
class GeneralMember
{
private:
	string memberID;
	string memberPW;
	string name;
	int ssn;
	RecruitCollection AppliedRecruitCollection;
public:
	void ListApplication();
};
class ApplicationStats
{
private:
	GeneralMember* pGeneralMember;
	Recruit* pRecruit;
public:
	void ShowApplicationStats();
};
class ApplicationStatsUI
{
private:
	ApplicationStats* pApplicationStats;
public:
	void CheckApplicationStats();
};
class Application
{
private:
	string companyName;
	string task;
	int number;
	string deadline;
protected:
	void GetApplicationDetails();
};

class ApplicationCollection
{
private:
	Application *ownedApplication[];
public:
	void FindFirst();
	void GetNext();
	void AddApplication();
	void RemoveApplication();
};
class CompanyMember 
{
private: 
	string companyName;
	int businessNum;
	ApplicationCollection ownedApplicationCollection;
public:
	Recruit ListRecruit();
};
class RecruitStats
{
private:
	CompanyMember* pCompanyMember;
	Application* pApplication;
public:
	void ShowRecruitStats();
};
class RecruitStatsUI
{
private:
	RecruitStats* pRecruitStats;
public:
	void CheckRecruitStats();
};