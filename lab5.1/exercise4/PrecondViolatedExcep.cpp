/*
name: ziwen wang
file name: precondviolatedexcep.cpp
date: 23 mar 2019
berif: get the feedback of a function in runtime
*/
#include "PrecondViolatedExcep.h"

PrecondViolatedExcep::PrecondViolatedExcep(const string& message): logic_error("Precondition Violated Exception: " + message)
{
}  // end constructor

// End of implementation file.
