#!/bin/sh
ifconfig | grep -Eo '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'

