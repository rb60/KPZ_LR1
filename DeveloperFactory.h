#pragma once


class IJunior
{
public:
	virtual char* Ask(char* question) = 0;
	virtual void destroy() = 0;
};

class IMiddle
{
public:
	virtual char* Ask(char* question) = 0;
	virtual void destroy() = 0;
};

class ISenior
{
public:
	virtual char* Ask(char* question) = 0;
	virtual void destroy() = 0;
};

class IDeveloperFactory
{
public:
	virtual IJunior* createJunior() = 0;
	virtual IMiddle* createMiddle() = 0;
	virtual ISenior* createSenior() = 0;
	virtual void destroy() = 0;
};
