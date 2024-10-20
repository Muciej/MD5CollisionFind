#include <gtest/gtest.h>
#include <MD5Downloaded/md5.hpp>
#include <MD5Modified/md5.hpp>
#include <string>


TEST(MD5CrossCheck, basicHash)
{
    const std::string msg = "TestMsg";
    const auto hashOrg = MD5Downloaded::GetMD5String(msg);
    const auto hashMod = MD5Modified::GetMD5String(msg);
    EXPECT_EQ(hashOrg, hashMod);
}

