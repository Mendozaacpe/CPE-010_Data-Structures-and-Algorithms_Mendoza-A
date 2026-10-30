#include <iostream>
#include <string>
#include "playlist_ll.h"

int main() {
    PlayList<std::string>* playlist = nullptr;
    PlayList<std::string>* song = playlist;
    std::string namesong;
    int choice;

    do {
        std::cout << "======= YOUR MUSIC PLAYLIST =======" << std::endl;
        std::cout << "1. Create Playlist" << std::endl;
        std::cout << "2. Add Song" << std::endl;
        std::cout << "3. Display Playlist" << std::endl;
        std::cout << "4. Play Current Song" << std::endl;
        std::cout << "5. Next Song" << std::endl;
        std::cout << "6. Previous Song" << std::endl;
        std::cout << "7. Play All Songs" << std::endl;
        std::cout << "8. Delete Song" << std::endl;
        std::cout << "9. Exit" << std::endl;

        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1: 
            std::cout << "Playlist created! Please add songs" << std::endl;
            break;
            
            case 2:
            std::cout << "Enter a song title: " << std::endl;
            std::getline (std::cin >> std::ws , namesong);
            AddSong(namesong , &playlist);
            if (song == nullptr)
                song = playlist;
            break;

            case 3:
            DisplayPlayList(playlist);
            break;

            case 4:
            PlayCurrentSong(song);
            break;

            case 5:
            NextSong(&song);
            break;

            case 6:
            PreviousSong(&song);
            break;

            case 7:
            PlayListinLoop(playlist);
            break;

            case 8:
            std::cout << "Enter a song title to delete: ";
            std::getline (std::cin >> std:: ws, namesong);
            DeleteSong(namesong , &playlist);
            if (playlist == nullptr)
                song == playlist;
            else
                song = playlist;
            break;

            case 9:
            std::cout << "Exiting your playlist!" << std::endl;
            break;
            default:
            std::cout << "Invalid choice!" << std::endl;
        }
    } while (choice != 9);

    return 0;
}
