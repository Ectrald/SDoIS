#include <gtest/gtest.h>;
#include "Profile.h"

TEST(Profile_tests, set_email_and_phone_number) {
	User first(123, "Ectrald", "password");
	Profile profile(first, "Vladislav");
	profile.set_phone_number("+375291345275");
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	profile.set_email("asd@mail.ru");
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "email added");
}
TEST(Profile_tests, change_bio_and_location) {
	User first(123, "Ectrald", "password");
	Profile profile(first, "Vladislav");
	profile.change_bio("qweqw");
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	profile.change_location("Earth");
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "location changed");
}
TEST(Profile_tests, remove_music_and_post) {
	User first(123, "Ectrald", "password");
	Profile profile(first, "Vladislav");
	Post post("qwre");
	Music music("wwww.by", "", "Ectrald", 15.0, 123.0);
	profile.add_music(music);
	profile.add_post(post);
	profile.remove_post(post);
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	profile.remove_music(music);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "music removed");
}




