#include <gtest/gtest.h>;
#include "Group.h"

TEST(Group_tests, add_post) {
	Group group("qwe", "qwe");
	Post post("qwre");
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	group.add_post(post);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "Post added");
}

TEST(Group_tests, remove_post) {
	Group group("qwe", "qwe");
	Post post("qwre");
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	group.add_post(post);
	std::cout.rdbuf(new_buffer.rdbuf());
	group.remove_post(post);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "Post removed");
}

TEST(Group_tests, remove_user) {
	Group group("qwe", "qwe");
	User first(123, "Ectrald", "password");
	std::ostringstream new_buffer;
	group.add_user(first);
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::cout.rdbuf(new_buffer.rdbuf());
	group.remove_user(first);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "User removed");
}

TEST(Group_tests, change_name_and_description) {
	Group group("qwe", "qwe");
	group.change_name("dddd");
	
	std::ostringstream new_buffer;
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::cout.rdbuf(new_buffer.rdbuf());
	group.change_description("asdasd");
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "Description changed");
}