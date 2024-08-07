#include <iostream>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <cwchar>
#include <thread>
#include <chrono>
void sleep(int ms)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}
void set_font_windowsOS()
{
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;
    cfi.dwFontSize.Y = 30;
    cfi.FontFamily = FF_DONTCARE;        //is it really called DONTCARE? I actually care though wtf.
    cfi.FontWeight = FW_NORMAL;
    std::wcscpy(cfi.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
    system("Color 0A");  //green
}
int main()
{
    set_font_windowsOS();
    std::string text0 = "Hello, this is a test program to print letters with a delay.\nPress the exit button to close.............";
    while(true)
    {
        for(char i:text0)
        {
            sleep(150);
            std::cout<<i;
            std::cout.clear();
            std::cout.flush();
        }
        system("cls");
    }
return 0;
}
