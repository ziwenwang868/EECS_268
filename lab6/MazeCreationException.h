/*
name: ziwen wang
file name: MazeCreationException.h
date: 31 march 2019
berif: headerfile
*/
#ifndef MazeCreationException_h
#define MazeCreationException_h

#include <stdexcept>
#include <string>

using namespace std;

class MazeCreationException : public runtime_error
{
   public:
   MazeCreationException(const char* message="");
}; // end PrecondViolatedExcep
#endif
