#include <gtest/gtest.h>;
#include "Set.h";
std::string Output(Set some_set) {
    std::streambuf* oldBuffer = std::cout.rdbuf();
    std::ostringstream newBuffer;
    std::cout.rdbuf(newBuffer.rdbuf());
    some_set.Output();
    std::cout.rdbuf(oldBuffer);
    return newBuffer.str();
}
std::string Boolean(Set some_set) {
    std::streambuf* oldBuffer = std::cout.rdbuf();
    std::ostringstream newBuffer;
    std::cout.rdbuf(newBuffer.rdbuf());
    some_set.Set_boolean();
    std::cout.rdbuf(oldBuffer);
    return newBuffer.str();
}

TEST(TESTOUTPUT, Subset_geter) {
	Subset first("{a,b,c}");
	EXPECT_EQ(first.line(), "{a,b,c}");
}

TEST(TESTOUTPUT, Element_geter) {
	Element first("a");
	EXPECT_EQ(first.line(), "a");
}

TEST(TESTOUTPUT, Make_set) {
	std::string str_to_set = "{a, b, {b, a}, c}";
    str_to_set.erase(std::remove(str_to_set.begin(), str_to_set.end(), ' '), str_to_set.end());
	Set set1(str_to_set);
	EXPECT_EQ(Output(set1), "{a,b,c,{a,b}}");
}

TEST(TESTOUTPUT, Add_elem_test) {
    std::string str_to_set = "{a, b, {b, a}, c}";
    str_to_set.erase(std::remove(str_to_set.begin(), str_to_set.end(), ' '), str_to_set.end());
    Set set1(str_to_set);
    std::string elem_to_add = "f";
    std::istringstream input(elem_to_add);
    std::streambuf* oldCinBuffer = std::cin.rdbuf();
    std::cin.rdbuf(input.rdbuf());
    set1.Add_elem();
    std::cin.rdbuf(oldCinBuffer);
    EXPECT_EQ(Output(set1), "{a,b,c,f,{a,b}}");
}

TEST(TESTOUTPUT, Delete_elem_test) {
    std::string str_to_set = "{a, b, {b, a}, c , f}";
    str_to_set.erase(std::remove(str_to_set.begin(), str_to_set.end(), ' '), str_to_set.end());
    Set set1(str_to_set);
    std::string elem_to_delete = "f";
    std::istringstream input(elem_to_delete);
    std::streambuf* oldCinBuffer = std::cin.rdbuf();
    std::cin.rdbuf(input.rdbuf());
    set1.Delete_elem();
    std::cin.rdbuf(oldCinBuffer);
    EXPECT_EQ(Output(set1), "{a,b,c,{a,b}}");
}

TEST(TESTOUTPUT, Amount_of_elements_test) {
    std::string str_to_set = "{a, b, {b, a}, c , f}";
    str_to_set.erase(std::remove(str_to_set.begin(), str_to_set.end(), ' '), str_to_set.end());
    Set set1(str_to_set);
    EXPECT_EQ(set1.Amount_of_elements(), 5);
}

TEST(TESTOUTPUT, Affiliation_test) {
    std::string str_to_set = "{a, b, {b, a}, c , f}";
    str_to_set.erase(std::remove(str_to_set.begin(), str_to_set.end(), ' '), str_to_set.end());
    Set set1(str_to_set);
    std::string elem_to_check_affiliation = "a";
    EXPECT_EQ(set1[elem_to_check_affiliation], true);
}

TEST(TESTOUTPUT, Unification_test) {
    std::string str1_to_set = "{a, b, c, {a,b}}";
    std::string str2_to_set = "{f, d}";
    str1_to_set.erase(std::remove(str1_to_set.begin(), str1_to_set.end(), ' '), str1_to_set.end());
    str2_to_set.erase(std::remove(str2_to_set.begin(), str2_to_set.end(), ' '), str2_to_set.end());
    Set set1(str1_to_set);
    Set set2(str2_to_set);
    Set set3 = set1 + set2;
    EXPECT_EQ(Output(set3), "{a,b,c,f,d,{a,b}}");
}

TEST(TESTOUTPUT, Intersection_test) {
    std::string str1_to_set = "{a, d, {a,b}}";
    std::string str2_to_set = "{f, d, {a,b}}";
    str1_to_set.erase(std::remove(str1_to_set.begin(), str1_to_set.end(), ' '), str1_to_set.end());
    str2_to_set.erase(std::remove(str2_to_set.begin(), str2_to_set.end(), ' '), str2_to_set.end());
    Set set1(str1_to_set);
    Set set2(str2_to_set);
    Set set3 = set1 * set2;
    EXPECT_EQ(Output(set3), "{d,{a,b}}");
}

TEST(TESTOUTPUT, Difference_test) {
    std::string str1_to_set = "{a, d, {a,b}}";
    std::string str2_to_set = "{f, d}";
    str1_to_set.erase(std::remove(str1_to_set.begin(), str1_to_set.end(), ' '), str1_to_set.end());
    str2_to_set.erase(std::remove(str2_to_set.begin(), str2_to_set.end(), ' '), str2_to_set.end());
    Set set1(str1_to_set);
    Set set2(str2_to_set);
    Set set3 = set1 - set2;
    EXPECT_EQ(Output(set3), "{a,{a,b}}");
}

TEST(TESTOUTPUT, Bollean_test) {
    std::string str1_to_set = "{f, d}";
    str1_to_set.erase(std::remove(str1_to_set.begin(), str1_to_set.end(), ' '), str1_to_set.end());
    Set set1(str1_to_set);
    EXPECT_EQ(Boolean(set1), "f \nf d \nd \n");
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "ru");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}