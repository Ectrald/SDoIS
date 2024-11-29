#include <gtest/gtest.h>;
#include "Privacy_settings.h"

TEST(Privacy_settings_tests, change_privacy_settings) {
	Privacy_settings privacy_settings;
	User first(123, "Ectrald", "password");
	Profile profile(first, "Vladislav");
	
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	privacy_settings.change_settings(false, false, profile);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "Privacy settings changed");
}