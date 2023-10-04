# Optimization-of-Dot-Product
Optimization of dot product computation of two vectors using vector instructions.

## Windows
In this file, you can find all the source files that I used for my Final Take Home Test.

1. **Peiravani_Paniz_main.cpp**: This is the main function code.
2. **Peiravani_Paniz_dotProduct.cpp**: C++ implementation for calculating dot product.
3. **Peiravani_Paniz_dotProduct_Optimized.cpp**: Manual optimization of dot product.
4. **Peiravani_Paniz_DPPS**: DPPS file for further optimization.

For codes from (2) to (4), we can use `Peiravani_Paniz_main.cpp` code as our main function.
I also, put `Non-Optimized`, `O1 optimization`, and `O2 optimization` `.asm files` in the folder as well.

#### Visual Studios Projects:
If you are using the Visual Studios projects that are posted:

- **Peiravani_dotProduct**:
  `Visual Studio > Open Peiravani_dotProduct project folder > Peiravani_dotProduct.sln`
  
- **Peiravani_Manually Opt**:
  `Visual Studio > Open Peiravani_Manually Opt folder > Peiravani_Manually Opt.sln`

- **Peiravani_DPPS**:
  `Visual Studio > Open Peiravani_DPPS project folder > Peiravani_DPPS.sln`

# Optimization Settings:

## Disable optimization**:
 
To disable optimization:
  
- Project > Properties > C/C++:
- Optimization > Optimization [Disabled (/Od)]
- Code Generation > Basic Runtime Checks [Default]
- Enable Parallel Code Generation [No (/Qpar-)]
- Enable Enhanced Instruction Set [Not Set]

 ## Enable optimization**:
 
 To disable optimization:

 - Project > Properties > C/C++ 
- Optimization > Optimization [Maximum Optimization (Favor Speed) (/O2)]
  OR
- [Maximum Optimization (Favor Size) (/O1)]
- Code Generation > Basic Runtime Checks [Default]
- Enable Enhanced Instruction Set [Advanced Vector Extensions (/arch:AVX)]

### To build the Peiravani_Manually_Opt.cpp successfully we need to make sure that we are using x84





