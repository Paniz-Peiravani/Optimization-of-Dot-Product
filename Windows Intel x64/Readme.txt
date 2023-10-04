In this file, you can find all the source files that I used for my Final Take Home Test. 

(1) Peiravani_Paniz_main.cpp is my main function code.
(2) Peiravani_Paniz_dotProduct.cpp is my C++ code that calculat dotProduct.
(3) Peiravani_Paniz_dotProduct_Optimized.cpp is the manual optimization that I create for dotProduct.
(4) Peiravani_Paniz_DPPS is the DPPS file that I created for more optimization.

For codes from (2) to (4), we can use Peiravani_Paniz_main.cpp code as our main function.

I also, put Non-Optimized, O1 optimization, and O2 optimization .asm files in the folder as well.

_______________________________________________________________________________________________________________________________
If you are using the Visual Studios projects that are posted:

For Peiravani_dotProduct:
Visual Studio > Open Peiravani_dotProduct project folder > Peiravani_dotProduct > Peiravani_dotProduct.sln

For Peiravani_Manually Opt:
Visual Studio > Open Peiravani_Manually Opt folder > Peiravani_Manually Opt > Peiravani_Manually Opt.sln

For Peiravani_DPPS:
Visual Studio > Open Peiravani_DPPS project folder > Peiravani_DPPS > Peiravani_DPPS.sln

and then you can see each project on Visual Studio.
_______________________________________________________________________________________________________________________________
To disable optimization:
Project > Properties > C/C++ > Optimization > Optimization [Disabled (/Od)]
                             > Code Generation > Basic Runtime Checks [Default]
                             > Enable Parallel Code Generation [No (/Qpar-)]
                             > Enable Enhanced Instruction Set [Not Set]
_______________________________________________________________________________________________________________________________
To enable optimization:
Project > Properties > C/C++ > Optimization > Optimization [Maximum Optimization (Favor Speed) (/O2)] OR [Maximum Optimization (Favor Size) (/O1)]
                             > Code Generation > Basic Runtime Checks [Default]
                             > Enable Parallel Code Generation [Yes (/Qpar)]
                             > Enable Enhanced Instruction Set [Advanced Vector Extensions (/arch:AVX)]
_______________________________________________________________________________________________________________________________

To build the Peiravani_Manually_Opt.cpp successfully we need to make sure that we are using x84
 