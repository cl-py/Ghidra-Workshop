<div align="center">
    <img width=1000 height=200 src="./.public/ghidra_banner.png">
</div>

---

Welcome to the **Taming the Dragon: Ghidra Workshop** repository.

This workshop was designed to introduce attendees to the fundamentals of reverse engineering using Ghidra, a software reverse engineering suite developed by the National Security Agency (NSA). Through a series of exercises, participants learned how compiled binaries can be analyzed, decompiled, and understood without access to the original source code. 

## Workshop Overview

### Introductory Analysis

Participants were led through an installation walkthrough and afterwards, participants were guided through our **Demo** and **HelloWorld** programs. These exercises introduced:

- Navigating the Ghidra interface
- Importing and analyzing binaries
- Understanding disassembly and decompiled output
- Identifying functions, strings, and program flow

### Individual Exercise

Participants then analyze the Mockware binary independently. This exercise foced on:

- Identifying key program logic
- Applying reverse engineering techniques learned earlier in the workshop

### Real-World Case Study

The workshop concluded with an instructor-led decompilation and analysis of the **WANNACRY** ransonware binary. This section demonstrates how reverse engineering techniques can be applied to real-world malware and highlights the vvalue of analysis tools when examining unknown binaries.

## Repository

The repository contains source code and sample binaries used throughout the workshop.

```
.
├── demos_src/      # Introductory reverse engineering examples
├── executables/    # All the executables for static analysis
├── mockware_src/   # Independent workshop challenge
└── README.md
```

## Learning Objectives

By the end of the workshop, participants were able to:
- Import binaries into Ghidra
- Run and interpret analysis results
- Navigate diassembly and decompiled code
- Identify functions and strings within a binary
- Trace program execution flow
- Apply basic reverse engineering techniques to unfamiliar software

## Tools Used
- Ghidra
- C
- x86 Assembly
- Linux

## Notice

The contents of this repository were provided for **eduational purposes**. The included files are intended to demonstrate binary decompilation and reverse engineering concepts for beginners, with an emphasis on understanding how tools such as Ghidra can translate compiled binaries into human-readable code. 

These materials are designed to support learning and research in software analysis and reverse engineering.

## Malware Disclaimer

**No** WANNACRY source code, binaries, malware samples, or malicious artifacts were distributed in this repository or in the workshop. 

Any discussion of WANNACRY was conducted **strictly for educational and reverse engineering purposes**. Attendees were encouraged to perform any malware analysis **only** within isolated and secure environments. 

We are **not responsible** for any misuse of the techniques or tools discussed during the workstop. 

## Workshop Impact

- Presented to approximately 50 attendees
- Introduced beginners to reverse engineering concepts
- Demonstrated real-world malware analysis workflows using Ghidra
 