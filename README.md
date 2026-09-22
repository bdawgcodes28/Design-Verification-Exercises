# Design Verification Exercises
This repository will help students involved with Aggie Silicon & Integrated Circuits (ASIC) develop base level proficiency in design verification. While
working through the exercises in this repository, students will be exposed to several aspects of hardware design verification. If you 
have any questions while working through the following exercises, please reach out via GroupMe, or email 
Bryson Fields (bafields1@aggies.ncat.edu) or Zachary Johnson (zejohnson3@aggies.ncat.edu).

# Repository Contents
This repository will contain two designs that require verification. One more complex than the other.

1. A 4-bit counter
2. A 4-bit counter connected to an SRAM cell

You will learn more about each design as you work through each exercise. 

# Prerequisites
It is recommended that you complete these exercises in a linux environment. Please view your options below.

1. complete the exercises using Windows Subsystem for Linux (WSL).
2. Install Ubuntu Linux on your local system.

Run the following command to install WSL
```bash
wsl --install
```

To install Ubuntu Linux, vist [Official Ubuntu Website](https://ubuntu.com/)

You must also have a version of Git installed. You can check if you have Git installed on your system by running the following command:
```bash
git --version
```

If you do not have Git installed, install by running the following commands:
```bash
sudo apt update
sudo apt install git
```

Verify that Git installed correctly:
```bash
git --version
```

## Tools
To run through these exercises, you will need two EDA tools:

1. Verilator (Open-source simulation and design verification tool)
2. GTKWave (Waveform and signal viewing interface)

If you do not already have these tools ready on your local machine, you can download them by running the following command:
```bash
sudo apt update
sudo apt install verilator gtkwave
```

To verify that both tools install correctly, run the following to view the version numbers:
```bash
verilator --version
gtkwave --version
```

## Cloning Repository
To utilize the files in this repository on your local machine, you must clone the repository. You can do so by pressing
the green button that reads "Code" on the repository home page and copying the HTTPS link. Once you do so, run the following command
```bash
git clone (link you just copied)
```

Once you have downloaded all the necessary tools and cloned into the repository on your local machine, you can begin
navigating the different directories and working through the exercises.

For starters, run the following command to navigate to the "golden_counter" directory
```bash
cd golden_counter
```

If you are not familiar with the terminal, please view the following website to see [Common terminal commands](https://gist.github.com/bradtraversy/cc180de0edee05075a6139e42d5f28ce)
