#!/bin/bash
echo "the user name is :"
echo |whoami
echo "the hostname is : "
echo |hostname

the_path="$HOME/exam_directory"
if [ -d "$the_path" ]; then
	if [ -n "$(ls  "$the_path")" ]; then
		echo "directory exists and is not empty and contain this files with size:"
		du -h "$the_path"/* 
	else
		echo "directory exists and is empty then we create the 3 text files"
		cd ~/exam_directory
		touch file1.txt file2.txt file3.txt
	fi
else

	echo "$exam_directory does not exist and we create it and create the 3 files inside it"
	cd ~
	mkdir exam_directory
	cd exam_directory
	touch file1.txt file2.txt file3.txt
fi

