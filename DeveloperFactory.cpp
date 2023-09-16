#include "DllHead.h"
#include <string.h>

IJunior* CsFactory::createJunior()
{
	return new CsJunior();
}

IMiddle* CsFactory::createMiddle()
{
	return new CsMiddle();
}

ISenior* CsFactory::createSenior()
{
	return new CsSenior();
}

void CsFactory::destroy()
{
	delete this;
}

char* CsJunior::Ask(char* question)
{
	return _strdup("we will respond to your request within 10 working days");
}

void CsJunior::destroy()
{
	delete this;
}

char* CsMiddle::Ask(char* question)
{
	return _strdup("we will respond to your request within 10 working days");
}

void CsMiddle::destroy()
{
	delete this;
}

char* CsSenior::Ask(char* question)
{
	return _strdup("we will respond to your request within 10 working days");
}

void CsSenior::destroy()
{
	delete this;
}


IJunior* CppFactory::createJunior()
{
	return new CppJunior();
}

IMiddle* CppFactory::createMiddle()
{
	return new CppMiddle();
}

ISenior* CppFactory::createSenior()
{
	return new CppSenior();
}

void CppFactory::destroy()
{
	delete this;
}


char* CppJunior::Ask(char* question)
{
	return _strdup("we will respond to your request within 10 working days");
}

void CppJunior::destroy()
{
	delete this;
}

char* CppMiddle::Ask(char* question)
{
	return _strdup("we will respond to your request within 10 working days");
}

void CppMiddle::destroy()
{
	delete this;
}

char* CppSenior::Ask(char* question)
{
	return _strdup("we will respond to your request within 10 working days");
}

void CppSenior::destroy()
{
	delete this;
}


IJunior* JavaFactory::createJunior()
{
	return new JavaJunior();
}


IMiddle* JavaFactory::createMiddle()
{
	return new JavaMiddle();
}

ISenior* JavaFactory::createSenior()
{
	return new JavaSenior();
}

void JavaFactory::destroy()
{
	delete this;
}


char* JavaJunior::Ask(char* question)
{
	return _strdup("we will respond to your request within 10 working days");
}

void JavaJunior::destroy()
{
	delete this;
}

char* JavaMiddle::Ask(char* question)
{
	return _strdup("we will respond to your request within 10 working days");
}

void JavaMiddle::destroy()
{
	delete this;
}

char* JavaSenior::Ask(char* question)
{
	return _strdup("we will respond to your request within 10 working days");
}

void JavaSenior::destroy()
{
	delete this;
}

IDeveloperFactory* createCsFactory()
{
	return new CsFactory();
}

IDeveloperFactory* createCppFactory()
{
	return new CppFactory();
}

IDeveloperFactory* createJavaFactory()
{
	return new JavaFactory();
}
