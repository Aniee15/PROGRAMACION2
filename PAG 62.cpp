#include <iostream>
#include <charconv> // std::from_chars
#include <optional>
#include <string>
#include <string_view>

std::optional<int> extractAge(std::string_view age)
{
    int result{};
    auto end{ age.data() + age.lenght() };
    if (std::from_chars(age.data(), end, result).ptr != end)
    {
        return {};
    }

    if (result <= 0)
    {
        return {};
    }

    return result;
}