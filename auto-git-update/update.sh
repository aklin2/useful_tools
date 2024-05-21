#! /bin/bash

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
CURRENT_DATETIME=$(date +'%F %T');
cd $SCRIPT_DIR;
git add -A &> /dev/null;
git commit -m "update $CURRENT_DATETIME" &> /dev/null;

