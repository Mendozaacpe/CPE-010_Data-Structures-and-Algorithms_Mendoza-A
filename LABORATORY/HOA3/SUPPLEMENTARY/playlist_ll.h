#ifndef PLAYLIST_LL_H
#define PLAYLIST_LL_H

template <typename T>
class PlayList {
    public:
    T data;
    PlayList<T>* prev = nullptr;
    PlayList<T>* next = nullptr;
};

template <typename T>
PlayList<T>* CreatePlayList (T newData) {
     PlayList<T>* newSong = new PlayList<T>;
    newSong->data = newData;
    newSong->next = nullptr;
    newSong->prev = nullptr;
    return newSong; 
}

template <typename T>
void AddSong (T newData , PlayList<T>** currentSong) {
    PlayList<T>* newSong = CreatePlayList(newData);
    if (*currentSong == nullptr) {
        *currentSong = newSong;
        newSong->next = newSong;
        newSong->prev = newSong;
        return;
    } 
    PlayList<T>* tail = *currentSong;
    while (tail->next != *currentSong) {
        tail = tail->next;
    }
    tail->next = newSong;
    newSong->prev = tail;
    newSong->next = *currentSong;
    (*currentSong)->prev = newSong;
}

template <typename T>
void DisplayPlayList (PlayList<T>* currentSong) {
    if (currentSong == nullptr) {
        std::cout << "Your playlist is empty..." << std::endl;
        return;
    }
    PlayList<T>* tail = currentSong;
    do {
        std::cout << tail->data << std::endl;
        tail = tail->next;
    } while (tail != currentSong);
}

template <typename T>
void PlayCurrentSong (PlayList<T>* currentSong) {
    if (currentSong == nullptr) {
        std::cout << "Your playlist is empty..." << std::endl;
        return;
    }
    std::cout << "Now playing: " << currentSong->data << std::endl;
}

template <typename T>
void NextSong (PlayList<T>** currentSong) {
    if (*currentSong == nullptr) {
        std::cout << "No next song!" << std::endl;
        return;
    }
    *currentSong = (*currentSong)->next;
    std::cout << "Next song: " << (*currentSong)->data << std::endl;
}

template <typename T>
void PreviousSong (PlayList<T>** currentSong) {
    if (*currentSong == nullptr) {
        std::cout << "There is no previous song in your playlist!" << std::endl;
        return;
    }
    *currentSong = (*currentSong)->prev;
    std::cout << "Previous song: " << (*currentSong)->data << std::endl;
}

template <typename T>
void DeleteSong(T newData, PlayList<T>** currentSong) {

    if (*currentSong == nullptr) {
        std::cout << "Your playlist is empty..." << std::endl;
        return;
    }
    PlayList<T>* tail = *currentSong;
    do {

        if (tail->data == newData) {

            if (tail->next == tail) {
                delete tail;
                *currentSong = nullptr;
                std::cout << "Your song has been deleted!" << std::endl;
                return;
            }

            tail->prev->next = tail->next;
            tail->next->prev = tail->prev;

            if (tail == *currentSong)
                *currentSong = tail->next;
            delete tail;

            std::cout << "Your song has been deleted!" << std::endl;
            return;
        }

        tail = tail->next;
    } while (tail != *currentSong);
    std::cout << "Your song is not available!" << std::endl;
}

template <typename T>
void PlayListinLoop (PlayList<T>* songs) {
    if (songs == nullptr) {
        std::cout << "Your playlist is empty..." << std::endl;
        return;
    }
    PlayList<T>* tail = songs;
    std::cout << "Playing all your songs" << std::endl;
    do {
        std::cout << "Now playing: " << tail->data << std::endl;
        tail = tail->next;
    } while (tail != songs);
        std::cout << "End of your playlist! Returning to your first song." << std::endl;
}

#endif
