#ifndef _UTILITY_H
#define _UTILITY_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class Utility
{
public:
	vector<vector<char> >m_binary;
	Utility(string file_name);
	Utility();
	~Utility();
	vector<vector<char> > read_file(string file);
	vector<vector<char> > binary_char_to_ascii(vector<vector<char> > binary);
	void print_vector_vector_char_console(vector<vector<char> > v);
	void print_vector_vector_char_file(vector<vector<char> > v);
	void propality_of_zeroes_and_ones(vector<vector<char> > v);
	void length_of_zeros_codes(vector<vector<char> > v);
	void length_of_ones_codes(vector<vector<char> > v);
	void count_ones_line(vector<vector<char> > v);
	void print_encoded_string_in_file(string s, string path);
	bool compare_strings(string s1, string s2);
};

#endif