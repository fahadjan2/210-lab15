#include <iostream>
#include <vector>
#include <fstream>
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
     //File Opening
	ifstream file;
	file.open("input.txt");
	if (!file.is_open()) {
	    cout << "Failed to open file" << endl;
	    return 1;
	}
    
    //List populating
    vector<Movie> movieList;
    Movie currentMovie;
    string line;
    int count = 1;

    while (getline(file, line)) {
        if (count % 3 == 0) {
            currentMovie.setScreenWriter(line);
            count = 0;
        } 
        else if (count % 2 == 0) {
            currentMovie.setYear(stoi(line));
        }
        else {
            currentMovie.setTitle(line);
        }

        movieList.push_back(currentMovie);
        count++;
    }
}