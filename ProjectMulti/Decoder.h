#ifndef _Decoder_H
#define _Decoder_H
#include<string>
#include<vector>
using namespace std;

class Decoder
{
public:
	vector<vector<bool>> bMat;
public:
	Decoder();
	void runLengthDecoding(string encodedFilePath);
	void writeDecodedImage(string decodedFilePath);
	~Decoder();
};
#endif