#!/bin/bash
wget -q --output-document=$HOME/101-make_me_win.so https://github.com/Anwarmoo/alx-low_level_programming/raw/0bc2962df4635675421e229c5bbf67429d54e33d/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD=$HOME/101-make_me_win.so
