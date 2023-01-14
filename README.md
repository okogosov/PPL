# PPL
PPL is the Parenthesis Programming Language, in which all elements (statements, parameters, blocks) are enclosed in parentheses. 
PPL includes a preprocessor to simplify the writing programs and reduce the number of parentheses.
PPL was developed  with Microsoft Developer Studio,C#, without using any third party packages.

PPL is interpreted language, source code (format scr)  is translated into intermediate representation (format ppl) for immedeately execution.

The main PPL features:

   -extensibility, using functionalities of C# and adding user’s libraries by means of creating DLLs.
   
   -possibility to add all PPL-functionality to any user Applicaions.

This project includes TutorialPPL.pdf, command-line REPL utility (PPL interpreter) and other utilities , DLLs for using C# libraries, examples.
List of DLLs with C# functionalities will be expanded in the next versions.
CPPL.zip file it is framework-dependent win-x64 version.

Target framework .Net 7.0.

1. Unzip CPPL.VERSION.zip
2. Read TutorialPPL.VERSION.pdf
3. Run all examples - 
   cd cppl, 
   examples.bat
4. Run command-line interpreter - 
   cppl.exe or wppl.exe 

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
   - improved error dignostics
   	 


For help and any kind of proposals send email to developer: 
  Oscar Kogosov, ok21@hotmail.com
