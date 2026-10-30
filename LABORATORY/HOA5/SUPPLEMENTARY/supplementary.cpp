#include <iostream>
#include "printer.h"

int main() {
    
    Printer<Job> printer(5);
    int numberofJobs;

    std::cout << "======= SHARED PRINTER SIMULATION ======" << std::endl;
    
    std::cout << "Enter the number of jobs you want to add: " << std::endl;
    std::cin >> numberofJobs;

    for (int i = 0; i < numberofJobs; i++) {
        int id;
        std::string user;
        int pages;

        std::cout << "\nPlease enter you Job Details: " << i + 1 << std::endl;
        
        std::cout << "ID: ";
        std::cin >> id;

        std::cout << "Username: ";
        std::cin >> user;

        std::cout << "Pages: ";
        std::cin >> pages;

        Job newJob(id , user , pages);
        printer.AddJob(newJob);
    }

    std::cout << "\n======= PRINTING PROCESS =======" << std::endl;

    while(!printer.Empty()) {
        Job current = printer.ProcessJob();

        std::cout << "\nThese are the Printing Job: \n";
        current.DisplayJobs();
        std::cout << "The job is completed!\n";
    }

    std::cout << "\nAll print jobs have been completed.\n";

    std::cout << "Is the Queue Empty? " << (printer.Empty() ? "Yes" : "No") << std::endl;

    return 0;
}
