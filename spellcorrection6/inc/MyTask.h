 ///
 /// @file    MyTask.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-03-28 15:07:00
 ///
 
#ifndef __MY_TASK_H_
#define __MY_TASK_H_

#include <string>

using std::string;

class MyTask
{
public:
	MyTask(const string & queryWord, int peerfd); 

	void execute();
private:
	string _queryWord;
	int _peerfd;
};

#endif

