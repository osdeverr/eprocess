#include <iostream>

#include <filesystem>

int main()
{
    std::filesystem::path pozor = "re.exe --v --plak --ky //// //  / / // /elaymm4 //// re re";
    std::wcout << pozor.c_str();
}
