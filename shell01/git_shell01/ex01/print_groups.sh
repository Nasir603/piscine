#!/bin/bash
groups $FT_USER | sed 's/ / ,/g' | tr -d '\n' && echo -n '$'

