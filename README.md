# PPL
PPL is the Parenthesis Programming Language, in which all elements (statements, parameters, blocks) are enclosed in parentheses. 
PPL includes a preprocessor to simplify the writing programs and reduce the number of parentheses.

Code, functions unctions and data are stored in PPL as several kinds of Trees – 
root, NS, Functions, Configuration and may be displayed on Screen, saved and restored.

PPL configuration is defined in the file "Configuration.data" file and used when PPL runs or reloaded.

PPL is being developed  with Microsoft Developer Studio,C#, without using any third party packages.

PPL is interpreted language, source code (in the format "scr")  is translated into intermediate representation (in the format "ppl") for immediate execution.


File DesignPPL.pdf briefly describes the most important code processing steps.


The main PPL features:

   -extensibility, which allows users to use C# functionalities and add their own libraries by creating DLLs.
   
   -ability to add all PPL-functionality to any user Applicaions.

This project includes:

	TutorialPPL.pdf, 
	CPPL.zip:
	
	  -command-line REPL utility CPPL(PPL interpreter),
	
	  -Windows interpreter WPPL,
	
	  -utility ULC for generation user's library code,
	
	  -utility Assistant for presentation format all commands,
	
	  - DLLs for using C# libraries and others, 
	
	examples.
		
List of DLLs with C# functionalities will be expanded in the next versions.

Now PPL includes the following libraries:

	Array, ArrayList, Console, Convert, DataFrame, Dictionary, 
	
	Directory, Distributions, Excel, File, Math, MN_Numerics, 
	
	Queue, Random, Stack, Statistics, String, Vector.
	
CPPL.exe and WPPL.exe are framework-dependent win-x64 version.

Target framework .Net8.0 (CPPL.zip).

Target framework .Net7.0 (CPPL.NET7.zip).


1. Unzip CPPL.VERSION.zip
2. Read TutorialPPL.VERSION.pdf
3. Run all examples - 
   cd cppl, 
   examples.bat
4. Run command-line interpreter - 
   cppl.exe or wppl.exe 

For help, questions and any kind of business proposals send email to developer:

  Oscar Kogosov, ok21@hotmail.com


What's new in version 1.0.6:
   - fixed bugs
   - added windows interpreter wppl.exe
   - added 3 libraries: Dictionary, Stack, Queue
   
What's new in version 1.0.7:
   - added infinity loop
   - added example gcf.scr

What's new in version 1.0.8:
   - upgrade to .NET6
   - added libraries: File, Random,Vector, Matrix,MN_Numerics and MathNet.Numerics

What's new in version 1.0.9:
   - added cmd calc
   - added concept of public and private variables

What's new in version 1.0.10:
   - added commands displaynode, getnodes and getleves to work with hierarchical data structures
   - added types in Vector and Matrix libraries 
   - added highlighting support of keywords for editor Notepad++
   - fixed bugs 
   
What's new in version 1.0.11
   - added commands sleep, write#
   - added Library Console
   - added samples
   - new mechanism passing data to functions   - 
   - fixed bugs

What's new in version 1.0.12
   - this version limited for complex calculations
   - added cmds call, funcname and examples
   - libraries Vector and Matrix are changed
   - significantly improved performance
   - improved compound statements syntax
   - fixed bugs

What's new in version 1.0.13
   - added cmds traceppl, recreate, argc
   - added delete methods to ArrayList.dll, Queue.dll,Stack.dll,Dictionary.dll
   - improved machanism transmit data between functions
   - added samples
   - fixed bugs
   
What's new in version 1.0.15
   - added utility Assistant. PPL Assistant displays format commands in ppl and scr modes.  
     As well this application displays format methods in additional libraries. 
   - added to utility CreateUserLibCode generation methods
   - added methods to libraries
   - added command getargname 

What's new in version 1.0.16
- added library Array
- added support delegates and callbacks
- changed utility CreateULC.exe

What's new in version 1.0.17
- added command setkvp
- changed algorithm processing command set
- fixed bugs

What's new in version 1.0.18
- operator "array" syntax is changed in scr-mode
- added library DataFrame, source files in DataFrame.zip, explanations in TutorialPPL.pdf, samples in CPPL.zip(directory examples\df\*.scr). This library will be increased to the desire of users.
- fixed bugs
- CPPL.exe icon is changed to icon with ping-pong player, because abbreviation PPL may be interpreted as Ping-Pong Language, instead of Parenthesis Programming Language.
- I thank my old friend Leonid Feygin for using PPL in statistical programs and help with PPL troubleshooting.

What's new in version 1.0.19
- added cmd 'struct' and function CopyStruct
- added Statistics library (sources and samples) based on MathNet.Numerics.Statistics
- fixed bugs

What's new in version 1.0.20
- added array cmds - 
            array.push, array.pop,array.reverse, array.shift, array.remove,
            array.clear, array.unshift, array.insert
- added functions to file CommonFunctions (array service) - 
           CsvToArray, ArrayToCsv, ArrayIndexOf, ArrayLastIndexOf, ArrayForEach
- added passing array to functions by this manner: function f({1,2,3...})
- added cmds sumdata, gettoken
- added the following cmds to scr-mode: writearray, delegate,dlgtinst,dlgset,dlgtcall,callback 
- added argument "row" to cmd writearray
- see Tutorial.pdf about all above changes
- fixed bugs

Library for connection PPL with MathNet.Numerics.Distributions 
Now accessible static functions for classes Normal, ChiSquared,FisherSnedecor,StudentT


What's new in version 1.0.21
- added Distributions library (classes Normal, ChiSquared,FisherSnedecor,StudentT)
- instead of utlity CreateUserLib -> new utlility ULC.exe 
- fixed bugs.

What's new in version 1.0.22
- improved processing comparison and logical operations
- added assigning comparison and logical to operator set
- added ?: operator (only one-time) to operator set 
- PCR - struct in block (not fixed)

What's new in version 1.0.23
- added mode to command createpplcode (cpc)
- improved diagnostic
- added commands definestruct, insertstruct, createstruct instead of commands struct and function copystruct

TestGetContents.zip 
   GetContents - to get string between start & end characters in string, contained quotes. This function used in preprocessor PPL

What's new in version 1.0.24
   -added using Math-functions to preprocessor PPL, see in details in Tutorial
   -improved error diagnoctic and fixed bugs

What's new in version 1.0.25
   - upgrade to .NET7
   - added type 'storage' for function parameters
   - improved error diagnostic for cmds 'var' and 'const'
   - fixed bug cmd 'definestruct' 

Added TestQMString.zip - string with quotes processing  
Added sample Erato.zip (Sieve of Eratosphenes) - 
   C# code Erato.dll, 
   scr code Erato.scr, contains Vector.dll, Erato.dll 
   
09/12/22 - Added project   PJ.zip PPL (Preprocessor Code Generator), includes PatternJson.dll
   
   This project is illustration of PPL Preprocessor:
	converts  file.scr   to file.ppl in accordance with grammar, 
	defined in files Patterns.json & Keywords.json, read README.txt with detailed explanations

What's new in version 1.0.26 (added 04/01/2023)
   - added format scr for the following commands:
   	storage commands, realloc, createpplcode (cpc)
   - changed cmd 'import' - load dll from user directory 	
   - added passing structures to functions	
   - improved mechanism passing data to functions
   - improved error diagnostic and fixed bugs
   - changed Tutorial
   - added samples
   
What's new in version 1.0.27 (added 14/01/2023)
   - added cmd setloopend
   - added to scr-mode cmds: readdata, savedata
   - added numerous creation: var x1,x2,x3... [= ...]
   
	 const x1,x2,x3 = ...
   - deleted Aliases.data
   - improved error diagnostics
   
What's new in version 1.0.28(added 23/01/2023)
   - added processing storage & struct for delegates
   - added examples for delegate.bat & struct.bat	
   - improved processing for commands set & get   (structures support, see Tutorial.pdf)
   - improved delegates commands 
   - improved error diagnostics and fixed bugs
   
What's new in version 1.0.29(added 12/2/2023)
   - added the following array commands: slice, sum, min, max, average, first, last, concat
   - added 23 new functions to DataFrame Library
   - improved error diagnostics
   - improved tutorial 
   - added samples
      
What's new in version 1.0.30(added 23/2/2023)
   - added  support in scr_format the following array commands: reverse, shift, clear, push, unshift, insert, slice, concat, copy
   - fixed bug in command array.copy
   - improved tutorial 
   - added samples
 
 What's new in version 1.0.31(added 27/2/2023)
   - improved error diagnostics
   - improved tutorial 
   - added samples
   
 What's new in version 1.0.32(added 21/3/2023)
   - improved error diagnostics
   - improved tutorial 
   - changed format functions SetRow and SetColumns in DataFrame Library
   - added samples 
   
 What's new in version 2.0.1(added 10/4/2023) 
   - creation code without operator set
   - added command getresult
   - added return result from called function
   - new version of utility ULC to create wrappers
   - new version of command dstree
   - improved tutorial
   - improved error diagnostics  
   
 What's new in version 2.0.2(added 25/5/2023) 
 - improved tutorial
 - improved instruction 'set' recognition algorithm
 - fixed bug in instruction switch-default
 - improved error diagnostics  

v.2.0.2.1
 - corrected main.help and JsonHelp.Main.json for Assist

Article about AddSet - https://d.strumenta.community/t/to-set-or-not-to-set-in-ppl/1824
AddSet - improved source code  (10/6/2023)


What's new in version 2.0.3 (added 21/6/2023)
 - improved error diagnostics, added information about error location (file name and line number) during PPL PreTranslator processing
 - upgrade to .NET8

