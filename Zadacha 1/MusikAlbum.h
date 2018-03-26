#include <iostream>
#include "Song.h"


class MusikAlbum
{ private:
    Song* songs;
    int numberofSongs;
    size_t capacity;
    void copy(const MusikAlbum& other);
    void erase();
public:
    MusikAlbum();
    ~MusikAlbum();
       MusikAlbum(const MusikAlbum& other);

    MusikAlbum& operator=(const MusikAlbum& other);

    //getters
    const Song* getSongs() const;
    int getNumber() const;
    size_t getCapacity() const;

    //setters

    void setSongs(const Song* newSongs, int newnumberofSongs);
    void setCapacity(size_t newCapacity);

    void addSong(const Song& newSong);
    void removeSongAtIndex(size_t index);
    double totallenght() const;
    size_t countofSongsofGenre(const char* genre) const;
    size_t countofSongsofSinger(const char* singer) const;

}
