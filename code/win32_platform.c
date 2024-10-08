#include <windows.h>

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

int WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevInstance,
  LPSTR     lpCmdLine,
  int       nShowCmd
) {
  // First we register the window class
  WNDCLASSA window_class = {0};
  // Then we set some of its properties
  window_class.style = CS_HREDRAW | CS_VREDRAW;
  window_class.lpszClassName = "Game_Window_Class";
  window_class.lpfnWndProc = window_callback;
  /*
  int       cbClsExtra;
  int       cbWndExtra;
  HINSTANCE hInstance;
  HICON     hIcon;
  HCURSOR   hCursor;
  HBRUSH    hbrBackground;
  LPCSTR    lpszMenuName;
  */

  /*
  RegisterClassA(
  [in] const WNDCLASSA *lpWndClass
);

  HWND window = CreateWindowExA(0, window_class.lpszClassName,
  LPCSTR    lpWindowName,
  DWORD     dwStyle,
  int       X,
  int       Y,
  int       nWidth,
  int       nHeight,
  HWND      hWndParent,
  HMENU     hMenu,
  HINSTANCE hInstance,
  LPVOID    lpParam
);
  */

};


