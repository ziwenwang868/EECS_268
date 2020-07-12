/*
name: ziwen wang
file name: Mazereader.h
date: 31 march 2019
berif: implementation of maze reader
*/
#include "mazereader.h"

mazereader::mazereader()
{
    startcol = 0;
    startrow = 0;
    row = 0;
    col = 0;
    maze = nullptr;
}

mazereader::~mazereader()
{
    if(maze!=nullptr)
    {
        for(int i=0;i<row;i++)
        {
            delete []maze[i];
        }
        delete []maze;
    }
}

mazereader::mazereader(string name)
{
    string file=name;
    ifstream infile;
    char input;

    infile.open(file);
    while(!infile.is_open())
    {
        cout<<"wrong filename try again: ";
        cin>>file;
        infile.open(file);
    }
    infile>>row>>col;
    infile>>startrow>>startcol;
    if(row<=1||col<=1)
    {
        infile.close();
        throw(MazeCreationException("Invalid starting position"));
    }
    else
    {
        if (startrow > row || startcol > col)
        {
            infile.close();
            throw(MazeCreationException("Invalid starting position"));
        }
        else
        {
            maze = new char *[row];
            for (int i = 0; i < row; i++)
            {
                maze[i] = new char[col];
                for (int j = 0; j < col; j++)
                {
                    infile >> input;
                    maze[i][j] = input;
                }
            }
            infile.close();
        }
    }

}

int mazereader::getcols()const
{
    return col;
}

int mazereader::getrows()const
{
    return row;
}

int mazereader::getstartrow()const
{
    return startrow;
}

int mazereader::getstartcol()const
{
    return startcol;
}

const  char* const* mazereader::getmaze()const
{
    return maze;
}

