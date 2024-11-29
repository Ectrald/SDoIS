#include <gtest/gtest.h>;
#include "Chat.h"

TEST(Chat_tests, chat_fuctions_test) {
	
	Chat chat({}, "chat");
	User first(123, "Ectrald", "password");
	User second(123, "Ectrald", "password");
	User third(123, "Ectrald", "password");
	chat.add_participant(first);
	chat.add_participant(second);
	chat.add_participant(third);
	chat.remove_participant(third);
	chat.change_chat_name("chattt");
	std::string chat_name = chat.get_chat_name();
	std::vector<User> participants = chat.get_participants();
	Message message(first, "qwe");
	std::streambuf* old_buffer = std::cout.rdbuf();
	std::ostringstream new_buffer;
	std::cout.rdbuf(new_buffer.rdbuf());
	chat.send_message(message);
	std::cout.rdbuf(old_buffer);
	EXPECT_EQ(new_buffer.str(), "Message send");
	
}