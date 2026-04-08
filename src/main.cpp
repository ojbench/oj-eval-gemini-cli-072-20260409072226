#include "cpu_core.hpp"

int main() {
    srand(time(0));
    RISC_V::CPU Yakumo_Yukari;
    Yakumo_Yukari.run();
    return 0;
}
