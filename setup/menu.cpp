#include "menu.hpp"
#include <raylib.h>
#include <string>



void Menu::Draw()
{
    std::string text = std::to_string(points) + "000";

    DrawTextEx(times, "Score", Vector2{400,10}, 48,2, WHITE);
    DrawTextEx(times, text.c_str(), Vector2{430,50}, 48,2, WHITE);

    

}

void Menu::SetPoints(int count){
    points+=count;
}

double Menu::GetInterval(){
    if (points) return (1-((double)points/100));
    return 1;
}

Menu::Menu(){
    points = 0;
    interval = 1;
    times = LoadFontEx("font/times.ttf", 48, nullptr, 0);
}
