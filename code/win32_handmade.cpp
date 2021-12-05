#include <windows.h>

LRESULT CALLBACK 
MainWindowCallBack(HWND   Window, //opaque piece of data
                   UINT   Message,//message to handle
                   WPARAM WParam, //
                   LPARAM LParam)
{
    LRESULT Result = 0;

  switch(Message)
  {
    case WM_SIZE:
    {
      OutputDebugStringA("WM_SIZE\n");  
    }break;
    case WM_DESTROY:
    {      
        OutputDebugStringA("WM_DESTROY\n");  
    } break;
    case WM_CLOSE:
    {
      OutputDebugStringA("WM_CLOSE\n");  
    }break;
    
    case WM_ACTIVATEAPP:
    {
      OutputDebugStringA("WM_ACTIVATEAPP\n");  
    }break;
    
    default:
    {
      //OutputDebugStringA("default\n");  
      Result = ;
    }break;
  }
  return(Result);
}


int CALLBACK 
WinMain(HINSTANCE Instance,
        HINSTANCE PrevInstance,
        LPSTR     CommandLine,
        int       ShowCode)
{

    //TODO: check if hredraw and other stuff is relevant
    WNDCLASS WindowClass = {};
    WindowClass.style = CS_OWNDC | CS_HREDRAW|CS_VREDRAW;
    WindowClass.lpfnWndProc = MainWindowCallBack;
    WindowClass.hInstance = Instance;
    //WindowClass.hIcon;
    WindowClass.lpszClassName = "HandmadeHeroWindowClass";

    return(0);
}


/*
    MessageBoxA(0, "This is handmadehero", "Handmade Hero", 
                MB_OK|MB_ICONINFORMATION);
*/

/*
Minute Notes

EP2:
-always refer to the MSDN for windows interfacing: GET USED TO IT
*/