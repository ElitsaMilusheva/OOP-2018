#include "Song.h"
#include <cstring>
#include <iostream>
using namespace std;


Song::Song()
{
    name = new char[1];
    name[0] = '\0';
    singer = new char[1];
    singer[0] = '\0';
    genre = new char[1];
    genre[0] = '\0';
    duration = 0.0;
}

void Song::copy(const Song& other)
{
    name= new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    singer = new char[strlen(other.singer)+ 1];
    strcpy(singer, other.singer);
    genre = new char[strlen(other.genre)+ 1];
    strcpy(genre, other.genre);
    duration = other.duration;
}
Song::Song(const char* name, const char* singer, const char* genre, double duration)
{
    this->name = new char[strlen(name)+1];
    strcpy(this->name, name);
    this->singer = new char[strlen(singer)+1];
    strcpy(this->singer, singer);
    this->genre = new char[strlen(genre)+1];
    strcpy(this->genre, genre);
   this->duration = duration;

}
void Song::erase()
{
    delete[] name;
    delete[] singer;
    delete[] genre;
}
Song::~Song()
{
    erase();
}
Song& Song::operator=(const Song& other)
{
    if(this != &other)
    {
        erase();
        copy(other);
    }
    return *this;
}
void Song::setName(const char* _name)
{
    strcpy(name, _name);
}
 const char* Song::getName() const
{
    return name;
}
void Song::setSinger(const char* _singer)
{
    strcpy(singer,_singer);
}
const char* Song::getSinger() const
{
    return singer;
}

void Song::setGenre(const char* _genre)
{
    strcpy(genre, _genre);

}
 const char* Song::getGenre() const
{
    return genre;
}
void Song::setDuration(double _duration)
{
    duration = _duration;
}
double Song::getDuration() const
{
    return duration;
}
