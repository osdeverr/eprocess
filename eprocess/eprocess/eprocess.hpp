#pragma once
#include <filesystem>

namespace eprocess
{
    namespace detail
    {
        // While using std::filesystem::path as a generic "platform string" type is weird
        // and hacky, it is a standard and dependency-free solution for exactly that.
        using platform_string = std::filesystem::path;
    } // namespace detail

    class process
    {
    };
} // namespace eprocess
