In this file, you can find all the source files that I used for my Final Take Home Test on Linux, Ubuntu. 

(1) Peiravani_Paniz_main.cpp is my main function code.
(2) Peiravani_Paniz_dotProduct.cpp is my C++ code that calculat dotProduct.
(3) Peiravani_Paniz_dpps is the DPPS file that I created for more optimization.

For both (2) to (3), we can use Peiravani_Paniz_main.cpp code as our main function.

I also, put Non-Optimized, O1 optimization, O2 optimization, and Manually Optimization .asm files in the folder as well.
_______________________________________________________________________________________________________________________________
For Linux:

For Linux we can use below command line to change our vectorization from disable to enable and for finding the optimization code with optimization flags

~~~Auto Vectorization and Auto Parallelization~~~

> -fno-tree-vectorize = disables automatic vectorization.
> -fno-tree-loop-distribute-patterns = disables automatic loop parallelization.

> -ftree-vectorize = enables automatic vectorization.
> -ftree-loop-distribute-patterns =disables automatic loop parallelization.

~~~ Find the assembly code~~~

> -S = will give us the assembly code behind our C++ code

~~~~Ptiomization flags~~~~

> -O0 = Non-optimization
> -O1 = level 1 optimization
> -O2 = level 2 optimization

Sample to compile code with optimization on gcc will be:
> g++ -O1 -ftree-loop-distribute-patterns -ftree-vectorize Peiravani_Paniz_dotProduct.cpp -o Peiravani_Paniz_dotProduct_Opt1 -S 

Based on what you are planning to compile and get from gcc, you can modify the above command line.

