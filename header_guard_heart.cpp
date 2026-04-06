//Header-Guard Heart

#ifndef HEART_GUARD_HPP
#define HEART_GUARD_HPP

#include <memory>
#include <string>

namespace longing {

class Heart {
public:
    Heart() : state("open") {}

    void whisper(const std::string& msg) {
        memory += msg + "\n";
    }

    std::string release() const {
        return memory;
    }

private:
    std::string state;
    std::string memory;
};

} // namespace longing

#endif // HEART_GUARD_HPP