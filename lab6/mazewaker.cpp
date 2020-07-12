/*
name: ziwen wang
file name: Mazewalk.cpp
date: 31 march 2019
berif: implementation of maze walker
*/
#include "mazewaker.h"

mazewaker::mazewaker(const char *const *mazePtr, int startRow, int startCol, int rows, int cols)
{
    m_maze = mazePtr;
    m_startRow = startRow;
    m_startCol = startCol;
    m_rows = rows;
    m_cols = cols;
    m_curStep = 0;
    if (m_maze[m_startRow][m_startCol] != 'W')
    {

        m_visited = new int *[m_rows];
        for (int i = 0; i < m_rows; i++)
        {
            m_visited[i] = new int[m_cols];
            for (int j = 0; j < m_cols; j++)
            {
                m_visited[i][j] = 0;
            }
        }
    }
    else
    {
        throw(MazeCreationException("Invalid starting position"));
    }
}
bool mazewaker::check(int row, int col)
{
    if (row < m_rows && col < m_cols && row >= 0 && col >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
const char *const *mazewaker::getMaze() const
{
    return m_maze;
}
const int *const *mazewaker::getVisited() const
{
    return m_visited;
}
bool mazewaker::recwalk(int strow, int stcol)
{
    m_curStep = m_curStep + 1;//increasing steps

    m_visited[strow][stcol] = m_curStep;//put steps

    if (getMaze()[strow][stcol] != 'E')
    {
        if (check(strow - 1, stcol))//check the position is on the scope 
        {
            if (getMaze()[strow - 1][stcol] != 'W' && getVisited()[strow - 1][stcol] == 0)//check the position is valid
            {
                if (recwalk(strow - 1, stcol))//move to that position
                {
                    return true;//return true if the move is vaild
                }
            }
        }

        if (check(strow, stcol + 1))
        {
            if (getMaze()[strow][stcol + 1] != 'W' && getVisited()[strow][stcol + 1] == 0)
            {
                if (recwalk(strow, stcol + 1))
                {
                    return true;
                }
            }
        }

        if (check(strow + 1, stcol))
        {
            if (getMaze()[strow + 1][stcol] != 'W' && getVisited()[strow + 1][stcol] == 0)
            {
                if (recwalk(strow + 1, stcol))
                {
                    return true;
                }
            }
        }

        if (check(strow, stcol - 1))
        {
            if (getMaze()[strow][stcol - 1] != 'W' && getVisited()[strow][stcol - 1] == 0)
            {
                if (recwalk(strow, stcol - 1))
                {
                    return true;
                }
            }
        }
    }
    if (getMaze()[strow][stcol] == 'E')
    {
        return true;
    }
    m_curStep--;
    m_visited[strow][stcol] = 0;//unmark steps
    return false;
}

int mazewaker::getVisitedRows() const
{
    return m_rows;
}

int mazewaker::getVisitedCols() const
{
    return m_cols;
}
void mazewaker::run()
{

    cout << "Starting position: " << m_startRow << "," << m_startCol << endl;
    cout << "Size: " << m_rows << "," << m_cols << endl;

    if (recwalk(m_startRow, m_startCol))
    {
        for (int i = 0; i < m_rows; i++)
        {
            for (int j = 0; j < m_cols; j++)
            {
                cout << getVisited()[i][j] <<'\t';
            }
            cout << endl;
        }
        cout<<"We escaped!"<<endl;
    }
    else
    {
        throw(MazeCreationException("No way out!"));
    }
}
mazewaker::~mazewaker()
{
    if (m_visited != nullptr)
    {
        for (int i = 0; i < m_rows; i++)
        {
            delete[] m_visited[i];
        }
        delete[] m_visited;
    }
}
