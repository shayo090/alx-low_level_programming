#!/bin/bash
wget -P /tmp https://github.com/shayo090/alx-low_level_programming/raw/master/0x18-dynamic_libraries/winning_ticket.so
export LD_PRELOAD=/tmp/winning_ticket.so
