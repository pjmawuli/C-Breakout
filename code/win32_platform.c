#include <windows.h>

typedef int b32;

#define true 1
#define false 0

#define global_variable static
#define internal static

global_variable b32 running = true;

// Defining the Window Proc function to handle messages
LRESULT CALLBACK window_callback (
  HWND window,
  UINT message,
  WPARAM w_param,
  LPARAM l_param
)
{
  return DefWindowProcA(window, message, w_param, l_param);
};

// Main function for windows graphics applications
int WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevInstance,
  LPSTR     lpCmdLine,
  int       nShowCmd
) {

  // Defining a window class
  WNDCLASSA window_class = {0};
  // Then we set some of its properties
  window_class.style = CS_HREDRAW | CS_VREDRAW; // Enables refresh when the window is resized horizontally and vertically
  window_class.lpszClassName = "Game_Window_Class";
  window_class.lpfnWndProc = window_callback;
  window_class.hInstance = hInstance;

  // Then we register the class
  RegisterClassA(&window_class);

  // Then we create the window
  HWND window = CreateWindowExA(
    0,
    window_class.lpszClassName,
    "BreakOut",
    WS_VISIBLE | WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT,
    CW_USEDEFAULT,
    1280,
    720,
    0, 0, 0, 0
);

  // Our main loop
  while (running) {
    // Input
    // Simulation
    // Render
  }

};


