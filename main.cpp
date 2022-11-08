#include <iostream>
#define PRT_TITLE() std::cout << "23.2 Seasons" << std::endl;
#define SPRING 0
#define SUMMER 0
#define AUTUMN 1
#define WINTER 0

//#define SEASON SPRING
//#define SEASON SUMMER
#define SEASON AUTUMN
//#define SEASON WINTER

#if SEASON == SPRING
int main() {
    PRT_TITLE();
    std::cout << "Spring" << std::endl;
    return 0;
}
#endif
#if SEASON == SUMMER
int main() {
    PRT_TITLE();
    std::cout << "Summer" << std::endl;
    return 0;
}
#endif
#if SEASON == AUTUMN
int main() {
    PRT_TITLE();
    std::cout << "Autumn" << std::endl;
    return 0;
}
#endif
#if SEASON == WINTER
int main() {
    PRT_TITLE();
    std::cout << "Winter" << std::endl;
    return 0;
}
#endif