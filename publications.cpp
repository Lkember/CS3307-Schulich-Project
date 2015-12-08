/**
* Source file for the publications class and its associated methods
*/
#include <iostream>
#include <iterator>
#include <list>
#include <qcustomplot.h>
#include <sstream>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "excelData.h"
#include "Parser.h"
#include "publications.h"
using namespace std;

//publications constructor (first/last year is set to the earliest/latest year in the file)
publications::publications(string file)
{
    excelData newData(file, 3);
    storedData = newData;
}
//publications constructor (first/last year is set using the given parameters)
publications::publications(string file, int firstYear, int lastYear)
{
    excelData newData(file, firstYear, lastYear, 3);
    storedData = newData;
}
//uninitialized constructor
publications::publications() {}

//returns the information to be printed to the GUI, with each type's dataset separated by a single hyphen
vector<string> publications::guiTypeData()
{
    return storedData.guiTypeData();
}

//shows a graph for the given person
void publications::showGraph(string personName, int graphType, QCustomPlot *graph)
{
    storedData.showGraph(personName, graphType, graph);
}

//get the total number of entries
int publications::getTotalEntries()
{
    return storedData.getTotalEntries();
}

//returns a pointer to the Parser object
Parser *publications::getParse()
{
    return storedData.getParse();
}

//returns the start year
int publications::getStartYear()
{
    return storedData.getStartYear();
}

//returns the end year
int publications::getEndYear()
{
    return storedData.getEndYear();
}

//updates the graph
void publications::updateGraph(int startYear, int endYear)
{
    storedData.updateGraph(startYear, endYear);
}

//updates the years
void publications::updateYears(int startYear, int endYear)
{
    storedData.updateYears(startYear, endYear);
}
