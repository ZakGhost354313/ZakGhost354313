/*

https://docs.microsoft.com/en-us/cpp/standard-library/filesystem?view=msvc-160

*/


#include <filesystem> // C++17 standard header file name
#include <experimental/filesystem> // Header file for pre-standard implementation
using namespace std::experimental::filesystem::v1;

bool create_directories(const path& pval);
bool create_directories(const path& pval, error_code& ec) noexcept;
