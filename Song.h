#include <iostream>
#include <cstring>
using namespace std;
class Song
{
    char* name;
    char* singer;
    char* genre;
    double duration;
    void erase();
    void copy(const Song& other);

    Song();
    ~Song();
    Song( const char* name, const char* singer, const char* genre, double duration);
    Song& operator=(const Song& other);
    void setName(const char* _name);
    const char* getName() const;
    void setSinger(const char* _singer);
    const char* getSinger() const;
    void setGenre(const char* _genre);
    const char* getGenre() const;
    void setDuration(double _duration);
    double getDuration() const;

};
