#pragma once
#include <iostream>
#include "Algo.h"

using namespace std;

class Rle :
	public Algo
{
public:
	Rle();
	virtual string encode(string message);

	virtual string decode(string encoded_message);
	~Rle();
};

