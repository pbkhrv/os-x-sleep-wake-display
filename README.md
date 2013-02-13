An OS X command-line utility to put display to sleep or wake it up.


How to use
----------

* Run 'displayctl sleep' to put display to sleep.
* Run 'displayctl wake' to wake it up.


How to build in Xcode
---------------------

1. Load project in Xcode.
2. Click 'Build'.


How to build from command line
------------------------------

1. Install Xcode or "Xcode Command Line Tools".
2. In terminal, cd into the project directory.
3. Run 'xcodebuild'.
4. Executable will be found in 'build/Release/displayctl'.


Notes
-----

* This utility puts to sleep ALL connected displays (tested with an external Apple display attached to an MBP).
* Tested on Intel MBP, OS X 10.6.8 and 10.7.5.

