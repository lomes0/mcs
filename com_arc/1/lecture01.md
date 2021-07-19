CISC Processors

Complex Instruction Set Computer

- A high level machine language
- Example: x86



Characteristics

- Many instruction types, with many addressing modes.
- Some of the instructions are complex.
  - Execute complex tasks
  - Require many cycles
- ALU operations directly on memory
  - Only a few registers, in many cases not orthogonal
- Variable length instructions
  - Common instruction get short codes -> save code length.





CISC Drawbacks

- Complex Instructions and Complex addressing modes
  - Complicates the processors
  - Slows down the simple common case
  - Contradicts - Make the Common case fast.
- Not compiler friendly
  - Non register orthogonal
  - Unused complex addressing modes
- Variable length instructions are a pain
  - Difficult to decode few instructions in parallel
    - As long as instruction is not decoded, its length is unknown.





RISC Processors

- Reduced Instruction Set Computer
- Simple Instructions enable fast hardware

Characteristics:

- A small and simple instruction set, Fixed length.
  - Execute simple tasks
  - Require a single cycle (with pipeline)
- ALU operations on registers only
- A few indexing methods
  - Memory is accessed using Load and Store instructions only.
  - Many GPR registers
- Simple architecture -> Simple micro-architecture
  - Simple, small and fast control logic
  - Simpler to design and validate
  - Room for on die caches: instruction cache + data cache
- Using a smart compiler
  - Better pipeline usage
  - Better register allocation
- Examples
  - MIPS
  - ARM (e.g mobile phones)
  - Sparc
  - Alpha
  - PowerPC



CISC is Dominant

The x86 architecture, which is a CISC architecture,

dominates the processors market.

- A vast amount of existing software
- Intel, AMD, Micfrosoft and others benefit from this
  - Intel and AMD put a lot of money to make high performance x86 processors, despite the architectural disadvantage.
  - Current x86 processor give the best cost/performance
- CISC processors use arc ideas from the RISC world
- Starting at Pentium$2$ and K6, x86 processors translate CISC instructions into RISC-like operations internally.
  - The inside core looks much like that of a RISC processor.



Performance

- Understand what aspects determine how fast a computer performs
- Define metrics to:
  - Assess the performance of a computer
  - Compare the performance of different computers
- User rigorous benchmarks to measure performance
- Performance figures are relevant to customers as well as designers/architects.



Understanding Performance

- Algorithm
- Programming language, compiler, architecture
  - Number of instructions executed per operation
- Processors and memory technology
  - How fast instructions are executed
- I/O subsystem (including OS)
  - How fast I/O is executed



Defining Performance

- Through output
  - Maximal Work done per unit Time
- Speed
  - How long it takes to do a task
- Redundancy 
- Avg Time





Relative Performance

- Define Performance = $\frac{1}{Time}$
- X is $n$ time faster than Y
  - $\frac{Time_y}{Time_x}=n$



Measuring Execution Time

- Elapsed Time

  - Total response time, including all aspects
    - Processing, I/O, OS overhead, idle time
  - Determines system performance

- CPU Time

  - Time spent processing a given job
    - Discount I/O, other job's shared
  - Comprises user CPU time, and system CPU time.

  - Different programs are affected differently by CPU and system performance.



CPU Clocking

- Operations of digital hardware governed by constant-rate clock.
  - Clock Period: duration of a clock cycle
    - e.g $250ps=0.25ns=250\times10^{-12}s$.
  - Clock frequency (rate): cycles per second
    - e.g 4.0GHz=4.0x$10^{9}$.



CPU Time

- = CPU Clock Cycles x Clock Cycle Time

- = Cpu Clock Cycles / Clock Rate.

Performance Improved by

- Reducing number of clock cycles
- Increasing clock rate
- Hardware designer must often trade off clock rate against cycle count



Example

- Computer A: 2GHz clock, 10s CPU time.
- Designing Computer B
  - Aim for 6s CPU time
  - Can do faster clock, but causes 1.2 x clock cycles.
- How fast must Computer B clock  be?

10 = y/x

6 = 1.2y/tx

t = (1.2/6)x(y/x) = 2

- Meaning, we should aim for $2$ faster clock rate.





Instruction Count and CPI

- Clock Cycles = Instruction Count x Cycles per Instruction

- CPU Time = Instruction Count x CPI x Clock Cycle Time

  ​		 = Instruction Count x CPI / Clock Rate

- Instruction Count for a program

  - Determined by program, ISA and compiler

- Average Cycles per instruction

  - Determined by CPU hardware
  - If different instruction have different CPI
    - Average CPI affected by instruction mix.



Example

For program P

- Computer A

  - Cycle Time = 250ps
  - CPI = 2

- Computer B

  - Cycle Time = 500ps
  - CPI = 1.2

- Which Computer is faster?

- Under the assumption that we are on the same ISA,

  we should have the same instruction count.

- Therefore Computer A is 1.2 times faster.



CPI and the ISA

- Comparing implementations of an ISA
  - CPI provides one way of comparing different implementations of the same ISA
  - The number of instructions executed for a given program is always the same.
- Multiple classes of instructions
  - The ISA has different classes of instructions
    - Arithmetic/logic, branch, memory, load/store, floating points.
  - Each class may take a different number of CPI



CPI in More Detail

- If different instruction classes take different numbers of cycles
  - Clock Cycles = $\sum\limits_{i=1}^{n}{CPI_i}\times Instruction \space Count _i$.

- Weighted average CPI
  - CPI $= \frac{Clock \space Cycles}{Instruction \space Count}$.
  - CPI $= \sum\limits_{i=1}^{n}{CPI_i}\times \frac{Instruction \space Count_i}{Instruction \space Count}$.



MIPS: Millions of Instructions Per Second

- MIPS is a common performance metric
- MIPS = $\frac{Instruction \space Count}{Execution \space Time \times 10^6}$
- MIPS = $\frac{CR}{CPI \times 10^6}$.
- Pitfall: Seemingly an objective measure
  - But dies not account for
    - Differences in ISAs between CPUs
    - Differences in complexity between instructions
    - Average CPI varies between programs on a given CPU



Amdahl's Law

- Let $T_1$ be the execution time of some code $M$.
- Assume the CPU is improved, and executes part of the code, $P$, faster by $S_P$.
- Say $P_r=\frac{|P|}{|M|}$.
- $T_2=T_1 \times [(1-P_{r})+\frac{P_r}{S_F}]$.
- Then clearly $T_2$ is affected by $P_r$.
- Speedup = $\frac{T_1}{T_2}=\frac{1}{(1-P_{r})+\frac{P_r}{S_F}}$.



Example

- The CPU was changed such that:
  - Floating point instructions will run 2.5 times faster
  - Memory access instructions will run 3 times faster
  - Integer arithmetic instructions will run 1.5 times slower
- A benchmark program contains
  - %15 floating point instructions
  - %20 memory access instructions
  - %40 integer arithmetic instructions
- What is the overall speedup of the benchmark program?



$T_2=T_1\times [(1-0.75) + 0.15\times \frac{1}{2.5} + 0.20\times \frac{1}{3} + 0.40 \times {1.5}]$

$=T_1\times 0.98$.





Pitfall: Amdahl's Law

- Cannot improve just one aspect of a computer and expect a proportional improvement in overall performance.
- Speedup is only affected by the part which is improved.
- Speedup < $\frac{1}{1-F}$
  - F is the proportional amount of time taken by the improved aspect.



Example

- Multiplication accounts for 80s in a 100s program.
- How much do we need to speed up multiplication to get a x5 overall speedup?
- By Infinity!
- Corollary: The opportunity for improvement is constrained by how much time the affected aspect consumes.



Number Representation

- 0xFFF = $15_{ten}\times 16^2 + 15_{ten}\times 16^1 + 15_{ten}\times 16^0=4095_{ten}=1111 \space 1111 \space  1111_{two}$.



Signed and Unsigned Integers

- C, C++ and Java have signed integers.
- C, C++ also have unsigned integers, which are used for addresses.
- 32-bit word can represent $2^{32}$ binary numbers.
- Unsigned integers in 32 bit word represent $\{0,...,2^{32} -1 \}$ values.



Signed Integers and Two's-Complement Representation

- Two's complement treas $0$ as positive, so 32-bit word represents $\{-2^{31},..-1,0,...,2^{31} -1\}$.

  - Book lists some other options, all of which are worse.

  - Every computer uses two's complement today.

- Most-significant bit (leftmost) is the sign bit, since $0$ means positive (including $0$), 1 means negative.

  - Bit 31 is the most significant, bit $0$ is the least significant.



Two's-Complement Signed Integers

- Given an n-bit number

  $X = -X_{n-1}\cdot2^{n-1} + X_{n-2}\cdot2^{n-2} + \cdot\cdot\cdot+X_{0}\cdot2^{0} $.

- $-2^{n-1}$ to $2^{n-1} - 1$.

- Example

  - 1111 1111 1111 1111 1111 1111 1111 1100 = $-4_{10}$.

- Bit 31 is sign bit

  - 1 for negative numbers
  - 0 for non-negative numbers

- -(-$2^{n-1}$) can't be represented.

- Non-negative numbers have the same unsigned and 2s-complement representations.

- Some specific numbers

  -  0 = 0000 0000 ... 0000
  - -1 = 1111 1111 ... 1111
  - Smallest = 1000 0000 ... 0000
  - Largest  = 0111 1111 ... 1111



Two's Complement

- N-bits word

- For positive values it's the regular binary representation.
- For negative values.
  - Say $v$ is some positive value.
  - Then $-v$ will have the Two's complement:
    - $2^{n}_{ten} -v_{ten}$ in binary form.
    - Most significant bit is 1.

- Another way to switch sign:
  - In binary, invert all bits and add 1.
  - Computers do it like that as well.



Two's-Complement Overflow Examples.

- Check out Slide-show number 103 lecture 01.
- We do a + b.
- The outcomes most significant bit, should be the.



Sign Extension

- Representing a number using more bits
- In MIPS instruction set
  - addi: extend immediate value
  - lb,lh: extend loaded byte/halfword.
  - beq, bne: entend the displacement.
- Replicate the sign bit to the left.
- Examples: 8-bit to 16-bit.
  - +2: 0000 0010  ->  0000 0000 0000 0010
  - -2: 1111 1110  ->  1111 1111 1111 0010



