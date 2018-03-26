#include "MusikAlbum.h"
#include <iostream>
MusikAlbum::MusikAlbum()
{
    int numberofSongs = 0;
    size_t capacity = 8;
    songs = new Song[capacity];

}
void MusikAlbum::copy(const MusikAlbum& other)
{
    songs = new Song[other.capacity];
    for(int i = 0; i < other.numberofSongs; ++i)
    {
        songs[i] = other.songs[i];
    }
    numberofSongs = other.numberofSongs;
    capacity = other.capacity;
}
void MusikAlbum::erase()
{
    delete[] songs;
}
MusikAlbum::~MusikAlbum()
{
    erase();

}
MusikAlbum& MusikAlbum::operator=(const MusikAlbum& other)
{
    if(this != &other)
    {
        erase();
        copy(other);
    }
    return *this;
}
const Song* MusikAlbum::getSongs() const
{
    return songs;

}
int MusikAlbum::getNumber() const
{
    return numberofSongs;
}
size_t MusikAlbum::getCapacity() const
{
    return capacity;
}
void MusikAlbum::setCapacity(size_t newCapacity)
{
    if(newCapacity > capacity)
        capacity = newCapacity;
    Songs* newSongs = new Song[capacity];
    for(size_t i = 0; i < numberofSongs; i++)
    {
        newSongs[i] = songs[i];

    }
    delete[] songs;
    songs = newSongs;
}
void MusikAlbum::setSongs(const Song* newSongs, int newnumberofSongs)
{
    delete[] songs;

    if(newSongs != nullptr && numberofSongs > 0)
    {
        capacity =numberofSongs = newnumberofSongs;
        songs = new Song[newnumberofSongs];
        for(int i = 0; i <numberofSongs; i++)
        {
            songs[i]= newSongs[i];
        }
    }
    else
    {
        songs = nullptr;
        numberofSongs = 0;
        capacity = 0;

    }
}
void MusikAlbum::addSong(const Song& other)
{
    if((numberofSongs + 1) > capacity)
    {

        setCapacity(numberofSongs*2);

    }
    songs[numberofSongs]= newSong;
    numberofSongs++;
}
double MusikAlbum::totallenght()
{
    doublr total = 0.0;
    for(int i = 0; i<numberofSongs; i++)
    {
        total +=songs[i].getDuration();
    }
    return total;
}
void MusikAlbum::removeSongAtIndex(size_t index)
{
    if(index < numberofSongs)
    {
        songs[index] = Song();
    }
}
size_t MusikAlbum::countofSongsofGenre(const char* genre)
{
    size_t countSongs = 0;
    if(genre == nullptr)
    {
        return countSongs;
    }
    for(int i = 0; i < numberofSongs; i++)
    {
        if(strcpy(songs[i].getGenre(), genre)== 0)
        {
            countSongs++
        }
    }
    return countSongs;

}
size_t MusikAlbum::countofSongsofSinger(const char* singer)
{
    size_t countSongs = 0;
    if(singer == nullptr)
    {
        countSongs;
    }
    for(int i = 0; i < numberofSongs; i++)
    {
        if(strcpy(songs[i].getSinger(), singer)==0)
        {
            countSongs++
        }
    }
    return countSongs;

}









