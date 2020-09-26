#pragma once
#include "MosyObject.h"
#include "string"

class  _declspec(dllimport) MosyResponsePackage :public MosyObject
{
public:
	std::wstring Head;
	std::wstring Body;
	MosyResponsePackage();
	~MosyResponsePackage();
};

