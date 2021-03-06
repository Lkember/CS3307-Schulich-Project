/**
  * Author: Team HoneyDew
  * Computer Science 3307, Group Project
  * December 9, 2015
  * Header file for the presentations class and its associated methods
*/
#ifndef PRESENTATIONS_H_INCLUDED
#define PRESENTATIONS_H_INCLUDED
#include <iostream>
#include <list>
#include <qcustomplot.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "excelData.h"
#include "Parser.h"
using namespace std;

//Defines the methods and instance variables associated with the presentations class
class presentations
{
private:

//Instance variables
    excelData storedData;


public:
//Public Constructors

//First/last year is set to the earliest/latest year in the file
    presentations(string file);

//First/last year is set using the given parameters
    presentations(string file, int startYear, int endYear);

//Uninitialized constructor
    presentations();

//Public methods

//Returns the information to be printed to the GUI, with each type's data separated by a single hyphen
    vector<string> guiTypeData();

//Shows a graph for the given person
    void showGraph(string personName, int graphType, QCustomPlot *graph);

//Get the total number of entries
    int getTotalEntries();

//Returns a pointer to the Parser object
    Parser *getParse();

//Returns the start year
    int getStartYear();

//Returns the end year
    int getEndYear();

//Updates the graph with a new start year and end year
    void updateGraph(int startYear, int endYear);

//Updates the start year and end year being stored
    void updateYears(int startYear, int endYear);
};

#endif //PRESENTATIONS_H_INCLUDED

