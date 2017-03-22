 ///
 /// @file    MyTask.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2016-03-28 15:34:24
 ///

#include "MyTask.h"
#include "MyDict.h"
#include <iostream>

using std::cout;
using std::endl;

MyTask::MyTask(const string & queryWord, int peerfd)
: _queryWord(queryWord)
, _peerfd(peerfd)
{
}

void MyTask::execute()
{
	cout << "Task::execute()--->query " << _queryWord << endl;
	MyDict * pDict = MyDict::createInstance();
	auto myDict = pDict->get_dict();
	cout << myDict[0].first << "-->" << myDict[0].second << endl;

}
