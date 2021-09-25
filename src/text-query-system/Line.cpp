// -------------------------------------------
//					Line
// -------------------------------------------

#include "Line.h"
#include <iostream>

using namespace std;

Line::Line(const string& line)
{
	// Hint: some of string's member functions might come in handy here
	// for extracting words.
	line_=line;

	for(unsigned int i=0; i<line_.length(); i++)
    {
        singleWord+=line_[i];
    }
	/*auto i=0;
    while(line_[i]!=' ')
    {
       firstWord+=line_[i];
       i++;
    }*/


}

bool Line::contains(const Word& search_word) const
{
    Line myobject;
    myobject=Line{singleWord};

    if(myobject==search_word)
        return true;
    else
	    return false;
}
