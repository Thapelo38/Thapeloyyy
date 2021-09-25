// -------------------------------------------
//					Word
// -------------------------------------------

#include "Word.h"
#include <string>

using namespace std;

Word::Word(const string& word): word_{word}
{
    // throws an exception (in the form of WordContainsNoLetters object)
    // indicating that the word being constructed contains no letters

    if (word_.empty()) throw WordContainsNoLetters{};



    unsigned int i=0;
    string TempWord="";
    auto counter=0ul;



    for(unsigned int j=0; j<word_.length(); j++)
    {
        if(isalpha(word_[j])==false)
        {
            counter++;

        }
        if(counter+1==word_.length())
        {
            throw WordContainsNoLetters{};
        }
        if(word_[j]==' ')
        {
            throw WordContainsSpace{};
        }
    }

    i=0;
    while(i!=word_.length())
    {

        if(isalpha(word_[i]))
        {
            word_[i]=tolower(word_[i]);
            TempWord+=word_[i];
        }

        i++;
    }
    word_=TempWord;

    // Note, we will cover exceptions in more detail later on in the course.
}

// overloads the equivalence operator which allows to Words to be compared using ==
bool Word::operator==(const Word& rhs) const
{
    if (word_ == rhs.word_)
        return true;
    else
        return false;
}

bool Word::isQueryable() const
{
    if(word_.length()>=3)
        return true;
    else
        return false;
}
