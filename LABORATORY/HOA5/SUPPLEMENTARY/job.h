#ifndef JOB_H
#define JOB_H
#include <iostream>
#include <string>

class Job {
    private:
    int id;
    std::string user;
    int pages;
    
    public:
        Job() {
            id = 0; 
            user = " ";
            pages = 0;
        }
        Job(int id, std::string user, int pages){
            this->id = id;
            this->user = user;
            this->pages = pages;
        }
        int getID() const {
            return id;
        }
        std::string getUser() const {
            return user;
        }
        int getPages() const {
            return pages;
        }
        void DisplayJobs() const{
            std::cout << "ID: " << id << std::endl;
            std::cout << "Username: " << user << std::endl;
            std::cout << "Pages: " << pages << std::endl;
        }
};

#endif
