#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

void mazeTraverse(int m[12][12], int r, int c, int direction);
void makeMove(int m[12][12], int &r, int &c, int &direction);
int right(int m[12][12], int r, int c);
int left(int m[12][12], int r, int c);
int up(int m[12][12], int r, int c);
int down(int m[12][12], int r, int c);

void move(int m[12][12], int &r, int &c);
bool canMove(int m[12][12], int r, int c);
void blaze(int m[12][12], int &r, int &c);
bool canBlaze(int m[12][12], int r, int c);
void generateMaze(int m[12][12], int r, int c);
int findStart();
void printMaze(int m[12][12]);
void convert3to0(int m[12][12]);



int freeSquare = 0;
int blockedSquare = 1;
int travelledSquare = 3;
bool foundExit = false;

int main()
{
    srand(time(0));

    int maze[12][12] = {0};

    for(int i = 0; i < 12; ++i)
    for(int j = 0; j < 12; ++j)
        maze[i][j] = 1;

    int r = findStart();
    //int r = 0;
    int c = 0;

    maze[r][c] = 0;
/*
    if(canMove(maze, r, c))
        cout << "Can move" << endl;
    else
        cout << "Can't move" << endl;
*/
/*
    while(true)
    {
        if(canBlaze(maze, r, c))
            cout << "Can blaze" << endl;
        else
            cout << "Can't blaze" << endl;
        blaze(maze, r, c);
        printMaze(maze);
        system("pause");
    }
*/

    generateMaze(maze, r, c);
    convert3to0(maze);
    maze[r][c] = 2;
    printMaze(maze);
    system("pause>nul");
    mazeTraverse(maze, r, c, 3);

    return 0;
}

void generateMaze(int m[12][12], int r, int c)
{

    bool made = false;

    while(made == false)
    {
        if(c == 11)
            foundExit = true;


        if(canBlaze(m, r, c))
        {
            blaze(m, r, c);
            //printMaze(m);
            //system("pause");
        }
        else if(canMove(m, r, c))
        {
            m[r][c] = 3; //3 means you can't blaze from that square
            //printMaze(m);
            //system("pause");
            move(m, r, c); //move to first open square that can be found
        }
        else
            made = true;

    }

    printMaze(m);
}


void move(int m[12][12], int &r, int &c)
{
    if(m[r][c+1] == 0)
        c++;
    else if(m[r+1][c] == 0)
        r++;
    else if(m[r][c-1] == 0)
        c--;
    else if(m[r-1][c] == 0)
        r--;
    else
        cout << "We have a problem..." << endl;

}

bool canMove(int m[12][12], int r, int c) //if there is an adjacent zero space, return true
{
    if(m[r][c+1] == 0)
        return true;
    else if(m[r+1][c] == 0)
        return true;
    else if(m[r][c-1] == 0)
        return true;
    else if(m[r-1][c] == 0)
        return true;
    else
        return false;
}

void blaze(int m[12][12], int &r, int &c) //find blazing direction and blaze it!
{
    bool foundPath = false;

    while(foundPath == false)
    {

        int direction = (1 + rand() % 4) * 3;
        //cout << direction << endl;

        switch(direction)
        {
            case 3:
                if(c + 1 <= 11
                && m[r][c + 2] == blockedSquare
                && m[r-1][c+1] == blockedSquare && m[r+1][c+1] == blockedSquare
                && m[r][c + 1] == blockedSquare)
                {
                    if(c == 10 && foundExit == true)
                        ; //do nothing
                    else
                    {
                        c++;
                        foundPath = true;
                    }
                }
                break;
            case 6:
                if(r + 1 <= 10
                && m[r + 2][c] == blockedSquare
                && m[r+1][c+1] == blockedSquare && m[r+1][c-1] == blockedSquare
                && m[r + 1][c] == blockedSquare
                && c != 0 && c != 11)
                {
                    r++;
                    foundPath = true;
                }
                break;
            case 9:
                if(c - 1 >= 0
                && m[r][c - 2] == blockedSquare
                && m[r-1][c-1] == blockedSquare && m[r+1][c-1] == blockedSquare
                && m[r][c - 1] == blockedSquare
                && c - 1 != 0)
                {
                    c--;
                    foundPath = true;
                }
                break;
            case 12:
                if(r - 1 >= 1
                && m[r - 2][c] == blockedSquare
                && m[r-1][c+1] == blockedSquare && m[r-1][c-1] == blockedSquare
                && m[r - 1][c] == blockedSquare
                && c != 0 && c != 11)
                {
                    r--;
                    foundPath = true;
                }
                break;
        }
    }

    m[r][c] = 0; //blaze it!!

}



bool canBlaze(int m[12][12], int r, int c) //if an adjacent square can be blazed, return true
{
    bool blazeable = false;

    if(r <= 9
    && m[r + 2][c] == blockedSquare
    && m[r+1][c+1] == blockedSquare && m[r+1][c-1] == blockedSquare
    && m[r + 1][c] == blockedSquare //if square to be blazed is blazeable
    && c != 0 && c != 11)
    {
        blazeable = true;
    }
    else if(c <= 10
    && m[r][c + 2] == blockedSquare
    && m[r-1][c+1] == blockedSquare && m[r+1][c+1] == blockedSquare
    && m[r][c + 1] == blockedSquare)
    {
        if(c == 10 && foundExit == true)
            ; //do nothing
        else
        {
            blazeable = true;
        }
    }
    else if(r >= 2
    && m[r - 2][c] == blockedSquare
    && m[r - 1][c + 1] == blockedSquare && m[r-1][c-1] == blockedSquare
    && m[r - 1][c] == blockedSquare
    && c != 0 && c != 11) //if not on extreme left or right
    {
        blazeable = true;
    }
    else if(c >= 1
    && m[r][c - 2] == blockedSquare
    && m[r-1][c-1] == blockedSquare && m[r+1][c-1] == blockedSquare
    && m[r][c - 1] == blockedSquare
    && c - 1 != 0)
    {
        blazeable = true;
    }

    return blazeable;
}

int findStart()
{
    return 1 + rand() % 10;
}

void printMaze(int m[12][12])
{

    cout << endl;

    for(int i = 0; i < 12; ++i){
    for(int j = 0; j < 12; ++j)
    {
        switch(m[i][j])
        {
            case 0:
                cout << "  ";
                break;
            case 1:
                cout << "# ";
                break;
            case 2:
                cout << "X ";
                break;
            case 3:
                cout << "  ";
                break;
        }
    }
    cout << endl;
    }
    cout<<"Traverse using keys";
}

void mazeTraverse(int m[12][12], int r, int c, int direction)
{


    if(c == 11)
    {
        cout << "\nI'm free!" << endl;

        return;
    }
    else
    {
        //resetMaze(m);
        int pr = r;
        int pc = c;

        makeMove(m, r, c, direction);
        m[r][c] = 2;
        m[pr][pc] = 0;

        system("pause>nul");
        printMaze(m);
        mazeTraverse(m, r, c, direction);

     }

}

void makeMove(int m[12][12], int &r, int &c, int &direction)
{
    /*
     3 - right
     6 - down
     9 - left
    12 - up
    */

    switch(direction)
    {
        case 3:
            direction = right(m, r, c);
            break;
        case 6:
            direction = down(m, r, c);
            break;
        case 9:
            direction = left(m, r, c);
            break;
        case 12:
            direction = up(m, r, c);
            break;
    }

    switch(direction)
    {
        case 3:
            c++;
            break;
        case 6:
            r++;
            break;
        case 9:
            c--;
            break;
        case 12:
            r--;
            break;
    }
}

//try and move down
//if can't, try and move right
//if can't, try and move up
//if can't, try and move left
//if can't, declare that you are stuck



int right(int m[12][12], int r, int c)
{
    if(m[r+1][c] == 0)
        return 6;
    else if(m[r][c+1] == 0)
        return 3;
    else if(m[r-1][c] == 0)
        return 12;
    else if(m[r][c-1] == 0)
        return 9;
    else
        cout << "\nStuck!" << endl;

    return -1;
}

int left(int m[12][12], int r, int c)
{
    if(m[r-1][c] == 0)
        return 12;
    else if(m[r][c-1] == 0)
        return 9;
    else if(m[r+1][c] == 0)
        return 6;
    else if(m[r][c+1] == 0)
        return 3;
    else
        cout << "\nStuck!" << endl;

    return -1;
}

int up(int m[12][12], int r, int c)
{

    if(m[r][c+1] == 0)
        return 3;
    else if(m[r-1][c] == 0)
        return 12;
    else if(m[r][c-1] == 0)
        return 9;
    else if(m[r+1][c] == 0)
        return 6;
    else
        cout << "\nStuck!" << endl;


    return -1;
}


int down(int m[12][12], int r, int c)
{

    if(m[r][c-1] == 0)
        return 9;
    else if(m[r+1][c] == 0)
        return 6;
    else if(m[r][c+1] == 0)
        return 3;
    else if(m[r-1][c] == 0)
        return 12;
    else
        cout << "\nStuck!" << endl;

    return -1;
}

void convert3to0(int m[12][12])
{
    for(int i = 0; i < 12; ++i){
    for(int j = 0; j < 12; ++j){
        if(m[i][j] == 3)
            m[i][j] = 0;
    }}

}
