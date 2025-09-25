#include <iostream>
using namespace std;

class Movie {
private:
    string title;
    string screenWriter;
    int yearReleased;

public:
    string getTitle() {return title;}
    string getScreenWriter() {return screenWriter;}
    int getYear() {return yearReleased;}

    void setTitle(string t) {title = t;}
    void setScreenWriter(string sw) {screenWriter = sw;}
    void setYear(int y) {yearReleased = y;}

    void print() {
        cout << "Title: " << title << endl;
        cout << "Screen Writer: " << screenWriter << endl;
        cout << "Year Released: " << yearReleased << endl;
    }
};


int main() {
    
}