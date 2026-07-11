# Tetris

It's simple game tetris made on Raylib.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)


## Installation


### Download Lib


Arch
```bash
sudo pacman -S raylib
```

Fedora 
```bash
sudo dnf install raylib-devel
```
Ubuntu/Debian
```bash
sudo apt install libraylib-dev
```


### Download Project

```bash
git clone https://github.com/igorlityuev/tetris.git
cd tetris
g++ main.cpp setup/menu.cpp setup/menu.hpp setup/game.cpp setup/game.hpp setup/pos.hpp setup/block.hpp setup/grid.hpp setup/pos.cpp setup/block.cpp setup/grid.cpp -o tetris -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
```

## Usage

```bash
./tetris
```



## 
Made with by [Igor](https://github.com/igorlityuev)