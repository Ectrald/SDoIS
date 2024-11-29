#include <gtest/gtest.h>;
#include "Archive.h"
TEST(Archive_tests, change_password) {
	Archive my_archive("Project_Backup.zip", "2024-01-01", "2024-11-19", 1024000.0, "securePassword123");
    std::streambuf* old_buffer = std::cout.rdbuf();
    std::ostringstream new_buffer;
    std::cout.rdbuf(new_buffer.rdbuf());
    std::string password = "dsadasda";
    my_archive.change_password(password);
    std::cout.rdbuf(old_buffer);
    EXPECT_EQ(new_buffer.str(), "Password changed");
}
