#include "Main_page.h"

void Main_page::updating_page(Menu menu)
{
    this->posts.clear();
    for (Group group : menu.get_groups()) {
        std::vector<Post> groupPosts = group.get_posts();
        this->posts.insert(this->posts.end(), groupPosts.begin(), groupPosts.end());
    }
}
