The WSUtech Club's Physics Simulator.

Coding Standard:
1) Camel Case where applicable.
2) Class Names Capitalised.
3) Local variables start with a lower case letter.
4) All Classes for this project will be in the PhysicsSim namespace
5) No 'egyptian' brackets (where the open bracket is on the same line as the loop)
6) Avoid variable names like 'file', 'a', etc.


Documentation:
Please comment your code with appropriate level of description.
function comment blocks should (for now) try and follow this format:

//FunctionName
//Author:Jeromy Johnson
//Created:date
//Last Revision:
//Summary: 
//

NOTE:
We are going to look at Doxygen for documentation.


Source Control Rules:
1) If you are working on a specific feature, create a separate branch for it, and when that feature is completed
	we will merge that branch back in.
2) In general, we dont want to always work on the master branch, it will clutter it up.
3) Commit messages should be short, sweet, and to the point (max ~15 words)
4) Branches are your friends, dont be afraid of them

Setting up Git:
If you arent familiar with version control, I reccomend downloading git extensions, and doing a full install
then, follow this guide to set up your ssh keys: https://help.github.com/articles/generating-ssh-keys

Compiling:
First, you will need SDL, download this from: http://www.libsdl.org/release/SDL-devel-1.2.15-VC.zip
Extract this to somewhere where you can easily find it. (I suggest C:\SDL)
Now go into your project in visual studio and find VC++ Directories
Click include directories and add a new entry pointing to C:\SDL\include (or similar)
Next, click library directories and add a new entry pointing to C:\SDL\lib (or similar)
Now, Open up Project -> Properties -> Linker -> Input and add SDL.lib and SDLmain.lib to Additional Dependencies on separate lines
Now, make sure that SDL.dll (can be found in the files you downloaded) is in your bin folder
	NOTE: there may be other (better) ways to do this previous step, but i havent figured them out
			in visual studio 2012


Any Questions: jeromyj@gmail.com