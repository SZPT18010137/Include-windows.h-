/* Includes ----------------------------------------------------------------------*/
#include <windows.h>

/* Main --------------------------------------------------------------------------*/
int main(void){
	HWND window; // Assign window handler

	window = FindWindow(NULL, "test - 记事本"); // find the title "test-记事本" window

	SendMessage(window, WM_CLOSE, 0, 0); // Close the window 

	printf("\"test - 记事本\" had been closed.\n"); // Output result

	system("pause"); // Pause
	
	return 0;
}
