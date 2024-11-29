#include <gtest/gtest.h>;
#include "Friend_list.h"

TEST(Friend_list_tests, add_friend) {
	Friend_list friend_list;
	User first(123, "Ectrald", "password");
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	friend_list.add_friend(first);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "friend added");
	
}
TEST(Friend_list_tests, remove_friend) {
	Friend_list friend_list;
	User first(123, "Ectrald", "password");
	friend_list.add_friend(first);
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	friend_list.remove_friend(first);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "friend removed");
}
TEST(Friend_list_tests, is_friend) {
	Friend_list friend_list;
	User first(123, "Ectrald", "password");
	friend_list.add_friend(first);
	friend_list.is_friend(first);
	EXPECT_EQ(friend_list.is_friend(first), true);
}
