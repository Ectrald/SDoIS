#include <gtest/gtest.h>;
#include "Accountant.h"
#include "Archive.h"
#include "Accounting.h"
#include <string>

TEST(Accountant_tests, salary_calculation) {
    Accountant accountant(
        "John",
        "Doe",
        35,
        10.5,
        "Male",
        160,
        5000.0,
        "Healthy",
        "+1-234-567-890",
        "john.doe@example.com",
        "9 AM - 5 PM",
        "Master's Degree"
    );
    EXPECT_EQ(accountant.salary_calculation(10.0, 20.0, 5.0), 25.0);
}
TEST(Accountant_tests, work) {
    Accountant accountant(
        "John",
        "Doe",
        35,
        10.5,
        "Male",
        160,
        5000.0,
        "Healthy",
        "+1-234-567-890",
        "john.doe@example.com",
        "9 AM - 5 PM",
        "Master's Degree"
    );
    Accounting accounting;
    Archive my_archive("Project_Backup.zip", "2024-01-01", "2024-11-19", 1024000.0, "securePassword123");
    std::streambuf* old_buffer = std::cout.rdbuf();
    std::ostringstream new_buffer;
    std::cout.rdbuf(new_buffer.rdbuf());
    accountant.work(accounting, my_archive, "securePassword123");
    std::cout.rdbuf(old_buffer);
    
    
    EXPECT_EQ(new_buffer.str(), "Work is done");
}

TEST(Accountant_tests, add_client) {
    Accountant accountant(
        "John",                  
        "Doe",                  
        35,                     
        10.5,                   
        "Male",                 
        160,                     
        5000.0,                  
        "Healthy",               
        "+1-234-567-890",      
        "john.doe@example.com", 
        "9 AM - 5 PM",           
        "Master's Degree"        
    );
    std::streambuf* old_buffer = std::cout.rdbuf();
    std::ostringstream new_buffer;
    std::cout.rdbuf(new_buffer.rdbuf());
    std::string client = "Maks";
    accountant.add_client(client);
    std::cout.rdbuf(old_buffer);
    EXPECT_EQ(new_buffer.str(), "Client added");
}