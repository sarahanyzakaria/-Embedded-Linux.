#!/bin/bash
the_path="$HOME/.bashrc"
if [ -f "$the_path" ]; then
	echo HELLOW=$HOSTNAME >> $HOME/.bashrc
	echo LOCAL=$whoami >> $HOME/.bashrc
	gnome-terminal
else
	echo "the file is not exist"
fi

