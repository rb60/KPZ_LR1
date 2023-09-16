#pragma once
#include "DeveloperFactory.h"

//C#
class CsFactory : public IDeveloperFactory
{
	IJunior* createJunior() override;
	IMiddle* createMiddle() override;
	ISenior* createSenior() override;
	void destroy() override;
};

class CsJunior : public IJunior
{
	char* Ask(char* question) override;
	void destroy() override;
};

class CsMiddle : public IMiddle
{
	char* Ask(char* question) override;
	void destroy() override;
};

class CsSenior : public ISenior
{
	char* Ask(char* question) override;
	void destroy() override;
};

//C++
class CppFactory : public IDeveloperFactory
{
	IJunior* createJunior() override;
	IMiddle* createMiddle() override;
	ISenior* createSenior() override;
	void destroy() override;
};

class CppJunior : public IJunior
{
	char* Ask(char* question) override;
	void destroy() override;
};

class CppMiddle : public IMiddle
{
	char* Ask(char* question) override;
	void destroy() override;
};

class CppSenior : public ISenior
{
	char* Ask(char* question) override;
	void destroy() override;
};

//Java
class JavaFactory : public IDeveloperFactory
{
	IJunior* createJunior() override;
	IMiddle* createMiddle() override;
	ISenior* createSenior() override;
	void destroy() override;
};

class JavaJunior : public IJunior
{
	char* Ask(char* question) override;
	void destroy() override;
};

class JavaMiddle : public IMiddle
{
	char* Ask(char* question) override;
	void destroy() override;
};

class JavaSenior : public ISenior
{
	char* Ask(char* question) override;
	void destroy() override;
};

//factory functiouns

extern "C" __declspec(dllexport) IDeveloperFactory* createCsFactory();
extern "C" __declspec(dllexport) IDeveloperFactory* createCppFactory();
extern "C" __declspec(dllexport) IDeveloperFactory* createJavaFactory();