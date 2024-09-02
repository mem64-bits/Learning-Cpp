#include <iostream>
#include <iomanip>  // For std::setw and std::setfill
#include <chrono>   // For time-related functions
#include <thread>   // For sleep_for

int main() {
    while (true) {
        // Get the current time
        auto now = std::chrono::system_clock::now();
        std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

        // Convert to local time
        std::tm* localTime = std::localtime(&currentTime);

        // Print the time in HH:MM:SS format
        std::cout << "\r" << std::setw(2) << std::setfill('0') << localTime->tm_hour << ":"
                  << std::setw(2) << std::setfill('0') << localTime->tm_min << ":"
                  << std::setw(2) << std::setfill('0') << localTime->tm_sec << std::flush;

        // Sleep for one second
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
