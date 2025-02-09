# Hangman

## About The Project

[![Project Screen Shot][project-screenshot]]()

This repository contains a series of code for the Hangman game for two persons (Instruction and rules at the bottom)

<p align="right">(<a href="#readme-top">back to top</a>)</p>

### Built With

* [![C++][cpp-shield]][cpp-url]

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->
## Getting Started

To set up the project locally, you need to install (if not already the case) some dependencies. To get a local copy up and running follow these steps.

### Prerequisites

* C++ Compiler

Install the build-essential package
  ```sh
  sudo apt install build-essential 
  ```

Create 2 repositories in the folder hangman
  ```sh
  mkdir lib
  mkdir bin
  ```

 Compile and install
  ```sh
 make
 ```

### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/lock94656/hangman.git
   ```
2. Open a terminal
3. Compile/Link by calling the makefile
 ```sh
   make
   ```

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- USAGE EXAMPLES -->
##Rules of the game

The goal is to find a word before than the hangman appears. Type a letter and if it's in the word, the letter appears,
else a part of the hangman is drawing. If the hangman is completely drawn, then player 2 lose the game

## Usage

For two persons. Open the folder "Data" and the file "MysteryWord.txt". Wright the word to find. 
The other person run the programms and try to find th Mystery Word writen in the "MysteryWord.txt".

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- LICENSE -->
## License

Distributed under the GPL License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- CONTACT -->
## Contact

Hugo Gibert

Project Link: [https://github.com/lock94656/hangman](https://github.com/lock9456/hangman)

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[cpp-shield]: https://img.shields.io/badge/-C++-blue?logo=cplusplus
[cpp-url]: https://isocpp.org/

[project-screenshot]: images/screenshot.png

[contributors-url]: https://github.com/lock94656/hangman/graphs/contributors
[forks-url]: https://github.com/lock94656/hangman/network/members
[stars-shield]: https://img.shields.io/github/stars/lock94656/hangman.svg?style=for-the-badge
[stars-url]: https://github.com/lock94656/hangman/stargazers
[issues-shield]: https://img.shields.io/github/issues/lock94656/hangman.svg?style=for-the-badge
[issues-url]: https://github.com/lock94656/hangman/issues
[license-shield]: https://img.shields.io/github/license/lock94656/hangman.svg?style=for-the-badge
[license-url]: https://github.com/lock94656/hangman/blob/master/LICENSE.txt