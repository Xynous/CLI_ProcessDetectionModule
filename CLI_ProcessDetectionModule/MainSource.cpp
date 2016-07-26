// Includes the Windows.h header file / API libary into the project/source file.
#include "Windows.h";

// Adds the .Net libarys within the source file, this is what CLI allows, managed and unmanaged source to be mixed together.
using namespace System;
using namespace System::Diagnostics;
using namespace System::Threading;

// Defines the DLL Entry point where the code begins executing.
void WINAPI DllMain()
{
	// Infinite for loop which will keep looping to check the clients for cheats.
	for (;;)
	{
		// Starting region
		#pragma region Injectors

		// Gets and stores the process name in the variable. 
		auto process1I = Process::GetProcessesByName("Cheat Process name goes here");
		auto process2I = Process::GetProcessesByName("Cheat Process name goes here");
		auto process3I = Process::GetProcessesByName("Cheat Process name goes here");

		// Ending region.
		#pragma endregion

		// Starting region
		#pragma region ClientChecks

		////////////////////////////////////////INJECTOR CHECKS START HERE//////////////////////////////////////////////////////////

		// If the process is not detected, then do nothing and jump to the else statement. Length is counting the amount of characters in the variable.
		if (process1I->Length == 0)
		{
			// Do nothing, jump to else statement
		}

		// Kills the game process when the cheat process is detected.
		else
		{
			// Stores process name in the gameProcess variable.
			for each (auto gameProcess in Process::GetProcessesByName("Process Goes here you want to kill if the cheat is detected"))
			{
				// Kills the game process (Forcefully) which is the process name string stored in gameProcess variable in this case.
				gameProcess->Kill();

				// Puts a 1 second pause on the thread, this prevents an exception error from occuring.
				Thread::Sleep(1000);

			}

		}

		// If the process is not detected, then do nothing and jump to the else statement. Length is counting the amount of characters in the variable.
		if (process2I->Length == 0)
		{
			// Do nothing, jump to else statement
		}

		// Kills the game process when the cheat process is detected.
		else
		{
			// Stores process name in the gameProcess variable.
			for each (auto gameProcess in Process::GetProcessesByName("Process Goes here you want to kill if the cheat is detected"))
			{
				// Kills the game process (Forcefully) which is the process name string stored in gameProcess variable in this case.
				gameProcess->Kill();

				// Puts a 1 second pause on the thread, this prevents an exception error from occuring.
				Thread::Sleep(1000);

			}

		}

		// If the process is not detected, then do nothing and jump to the else statement. Length is counting the amount of characters in the variable.
		if (process3I->Length == 0)
		{
			// Do nothing, jump to else statement
		}

		// Kills the game process when the cheat process is detected.
		else
		{
			// Stores process name in the gameProcess variable.
			for each (auto gameProcess in Process::GetProcessesByName("Process Goes here you want to kill if the cheat is detected"))
			{
				// Kills the game process (Forcefully) which is the process name string stored in gameProcess variable in this case.
				gameProcess->Kill();

				// Puts a 1 second pause on the thread, this prevents an exception error from occuring.
				Thread::Sleep(1000);

			}

		}
		
		////////////////////////////////////////INJECTOR CHECKS FINISHED HERE//////////////////////////////////////////////////////////

		// Ending region.
		#pragma endregion

	}
}