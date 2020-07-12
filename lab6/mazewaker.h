/*
name: ziwen wang
file name: mazewalker.h
date: 31 march 2019
berif: header file of mazewalker
*/
#ifndef mazewaker_h
#define mazewaker_h
#include "MazeCreationException.h"
#include <iostream>

class mazewaker
{
  public:
  mazewaker();
    /**
	*	@pre The mazePtr pointer is to a valid maze.
	*	@post A maze walker if created ready to traverse the maze from the start position is the specified order.
	*/
    mazewaker(const char *const *mazePtr, int startRow, int startCol, int rows, int cols);

    /**
	*
	*	@pre The visited array still exists and has the same dimensions (rows X cols)
	*	@post The visited array is deallocated
	*/
    ~mazewaker();

    /**
	*	@pre The maze is a valid maze.
	*	@post The maze is traversed until the end is reached or all moves are exhausted. 
	*	@return true if an exit was reached, false otherwise
	*/
    bool walkMaze();

    /**
	*	@return A const pointer to the visited array. (A pointer that cannot change the array)
	*/
    const int *const *getVisited() const;

    /**
	*	@return number of rows in maze
	*/
    int getVisitedRows() const;

    /**
	*	@return number of cols in maze
	*/
    int getVisitedCols() const;

    /**
	*	@return A const pointer to the maze. (A pointer that cannot change the array)
	*/
    const char *const *getMaze() const;
    /**
	*	@pre passing valid starting position
	*	@post recusively going to next valid position, unmark the position if checked four dercitions 
	*	@return true if it reachs exist, false otherwise
	*/
    bool recwalk(int startro, int startco);
    /**
	*	@pre passing a row and col
	*	@post check if the row and col is on the scope
	*	@return true if it is on scope, false otherwise
	*/
    bool check(int row, int col);
    /**
	*	@pre none
	*	@post start recwalk functuon and printing out informations
	*	@return none
	*/
    void run();

  private:
    /**
	*	@returns If the current position is the exit, true is returned. False is returned otherwise.
	*/
    bool isGoalReached() const;

    const char *const *m_maze;
   
    int **m_visited;
    int m_rows, m_cols;
    int m_startRow, m_startCol;
   
    int m_curStep;
};
#endif