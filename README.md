# AMSI-Bypass: Educational C++ Examples for AMSI Evasion

## Overview
This repository contains educational examples written in C++ that demonstrate techniques to bypass Windows' Antimalware Scan Interface (AMSI). It includes examples of patching the `AmsiScanBuffer` function in memory and using shellcode injection to disable AMSI scanning. These examples illustrate common evasion techniques used in penetration testing and red team operations.

## Purpose
The goal of this project is to deepen understanding of AMSI's role in Windows security and highlight potential vulnerabilities. **This repository is intended solely for ethical research, penetration testing in controlled lab environments, and educational purposes.** Use this code responsibly and do not apply it for any unauthorized or malicious activities.

## Features
- **Memory Patching Example**:  
  Demonstrates how to load `amsi.dll`, retrieve the address of `AmsiScanBuffer`, and patch it to force an immediate return, effectively bypassing AMSI.
  
- **Shellcode Injection Example**:  
  Shows how to allocate executable memory, inject a small shellcode snippet, and create a new thread to execute the shellcode that disables AMSI scanning.

## Disclaimer
The code provided in this repository is offered "as is" for educational purposes only. The author is not responsible for any misuse or damage caused by these examples. Always test in a safe, controlled environment such as a virtual machine.

## Medium Blog
I also write detailed articles on Medium where I discuss these techniques further, share my experiences in cybersecurity, and provide deeper insights into Windows security evasion methods. If you're interested in learning more about AMSI bypass techniques, ethical hacking, or cybersecurity in general, be sure to check out my [Medium blog](https://medium.com/@yourusername) for full articles, tutorials, and updates.

## Getting Started
1. **Clone the Repository**:  
   `git clone https://github.com/yourusername/AMSI-Bypass.git`
   
2. **Build the Project**:  
   Use your preferred C++ compiler on a Windows system to build the project.
   
3. **Test in a Safe Environment**:  
   Run the executable in a controlled environment (e.g., a Windows VM) to observe the AMSI bypass in action.

4. **Explore and Contribute**:  
   Feel free to review the code, experiment with the techniques, and contribute improvements or raise issues.

## Resources and Further Reading
- [AMSI Bypass Methods | Pentest Laboratories](https://pentestlaboratories.com/2021/05/17/amsi-bypass-methods/)
- [Another AMSI bypass - but in C++ | GitHub Repository](https://github.com/plackyhacker/AMSI-Bypass)
- [AMSI Write Raid Bypass Vulnerability | OffSec](https://www.offsec.com/blog/amsi-write-raid-0day-vulnerability/)

---

*Happy coding and ethical hacking!*
