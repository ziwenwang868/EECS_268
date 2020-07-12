/*
name: ziwen wang
file name: Mazereader.cpp
date: 31 march 2019
berif: header file of mazereader
*/
#ifndef mazereader_h
#define mazereader_h

#include<iostream>
#include<string>
#include<fstream>
#include"MazeCreationException.h"
using namespace std;

class mazereader
{
    public:
    /**
	*	@post A MazeReader is created. 
	*
	*/
    mazereader();
    /**
	*	@post A MazeReader is created. A 2D char array is allocated with the maze information.
	*	@throws MazeCreationExecption
	*
	*/
    mazereader(string filename);
    /**
	*	@post The maze is deallocated.
	*/
    ~mazereader();
    /**
	*	@pre the file was formatting and read in correctly
	*	@return Returns pointer to the maze
	*/
    const char* const* getmaze()const;
    /**
	*	@pre the file was formatted and read in correctly
	*	@returns the number of columns listed in the file
	*/
    int getcols()const;
    /**
	*	@pre the file was formatted and read in correctly
	*	@returns the number of rows listed in the file
	*/
    int getrows()const;
    /**
	*	@pre the file was formatted and read in correctly
	*	@returns the starting row
	*/
    int getstartrow()const;
    /**
	*	@pre the file was formatted and read in correctly
	*	@returns the starting column
	*/
    int getstartcol()const;

    private:
    int startcol;
    int startrow;
    int row;
    int col;
    char** maze;

};
#endif