#!/bin/sh
export CHROME_FLAGS="--ppapi-flash-path=$PWD/peppershim.so --ppapi-flash-version=22.0.0.209"

chromium
