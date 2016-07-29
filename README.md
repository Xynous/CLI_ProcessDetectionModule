# CLI_ProcessDetectionModule
CLI ProcessDetectionModule, is a module what will do the same as I developed within C# ProcessDetectionModule which is kill the game process once the cheat process is detected. But the difference is this is written within CLI C++ which means you can run and call this from managed and unmanaged source code.

# ProcessDetectionModule:
ProcessDetectionModule is a small function, what will monitor running proceses and kill processes when detected.

# Credits:
Xynous - Developer - Do not remove credits from official developer.

# Usage:
You are free to use this source code for your own projects, but do not remove the credits and any credits go to Xynous.

# Information:
This CLI C++ function will monitor process running in the background and when a set process is detected, it will kill the process / Force close the set detected process. An example could be, if "cheat1" process is detected then close "gameprocess" to prevent any further damage or interuption for players.

This source file has been developed towards game developers who would like to lower the rate of cheaters in their game, but this can be used for anything else you wish to use it for.

# Important Notes:
If you want the .Net libarys to work with the CLI C++, You need to add a reference to the project. The reference you need to add is "System" which allows the .Net libarys to be found in the project file. ALso its best if you use a CLR project which is found in visual studio to lower compile and linking errors.

