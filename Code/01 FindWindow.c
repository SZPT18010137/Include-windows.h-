/* Includes ----------------------------------------------------------------------*/
#include <windows.h>

/* Main --------------------------------------------------------------------------*/
int main(void){
	HWND window; // Assign window handler

	window = FindWindow(NULL, "test - ���±�"); // find the title "test-���±�" window

	SendMessage(window, WM_CLOSE, 0, 0); // Close the window 

	printf("\"test - ���±�\" had been closed.\n"); // Output result

	system("pause"); // Pause
	
	return 0;
}
